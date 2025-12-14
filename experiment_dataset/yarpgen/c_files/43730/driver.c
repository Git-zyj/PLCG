#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1582344733;
signed char var_1 = (signed char)-123;
long long int var_2 = -6161965406079435508LL;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
int var_7 = -343375468;
unsigned long long int var_9 = 1674713265528302127ULL;
unsigned char var_11 = (unsigned char)0;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)2;
long long int var_16 = 4186405251590534960LL;
int zero = 0;
int var_17 = -79773820;
unsigned char var_18 = (unsigned char)11;
unsigned short var_19 = (unsigned short)44720;
short var_20 = (short)-19464;
unsigned char var_21 = (unsigned char)180;
int var_22 = 620563749;
short arr_0 [18] [18] ;
unsigned char arr_1 [18] ;
unsigned short arr_2 [18] ;
long long int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (short)525;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)4400;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 6678277091645892079LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
