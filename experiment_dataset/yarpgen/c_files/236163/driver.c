#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20761;
_Bool var_2 = (_Bool)0;
long long int var_5 = 6871165083111755177LL;
signed char var_6 = (signed char)-118;
unsigned char var_7 = (unsigned char)66;
unsigned char var_9 = (unsigned char)13;
unsigned int var_10 = 2092207516U;
unsigned int var_13 = 168784702U;
int zero = 0;
signed char var_14 = (signed char)106;
unsigned int var_15 = 1082085947U;
int var_16 = -479353435;
short var_17 = (short)21056;
int var_18 = 1879149232;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1376449324U;
unsigned short var_21 = (unsigned short)486;
short var_22 = (short)-19009;
unsigned int var_23 = 2528042846U;
signed char var_24 = (signed char)60;
unsigned char arr_2 [11] ;
long long int arr_16 [16] ;
short arr_4 [11] ;
long long int arr_7 [22] ;
int arr_8 [22] ;
unsigned char arr_13 [13] [13] ;
unsigned int arr_14 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = 8246230838510819122LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-25881 : (short)-8680;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 8289326893148637048LL : 8579081916190813599LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1558316608 : 127462150;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = 566670984U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
