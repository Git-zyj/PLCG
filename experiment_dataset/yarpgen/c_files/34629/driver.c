#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26155;
signed char var_4 = (signed char)-72;
unsigned long long int var_5 = 9362784995219734039ULL;
int var_6 = 1639026175;
unsigned int var_8 = 3191637701U;
int var_9 = -168723597;
signed char var_11 = (signed char)18;
signed char var_13 = (signed char)54;
short var_14 = (short)3023;
int var_15 = -24555753;
int zero = 0;
unsigned long long int var_16 = 11942672243392816724ULL;
unsigned char var_17 = (unsigned char)183;
short var_18 = (short)5634;
unsigned char var_19 = (unsigned char)140;
int var_20 = -819139396;
unsigned short var_21 = (unsigned short)44718;
short arr_0 [11] ;
int arr_1 [11] ;
unsigned long long int arr_2 [11] ;
int arr_3 [11] [11] [11] ;
signed char arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)31109 : (short)-6390;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1976988907 : 1714524254;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 7451076989018015325ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -899705814;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)10 : (signed char)118;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
