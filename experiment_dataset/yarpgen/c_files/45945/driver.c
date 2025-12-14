#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32126;
unsigned short var_1 = (unsigned short)1886;
long long int var_2 = 454348504154993926LL;
unsigned int var_3 = 3718949176U;
unsigned int var_4 = 2184442728U;
int var_5 = 104779161;
_Bool var_6 = (_Bool)0;
short var_9 = (short)-9447;
unsigned char var_10 = (unsigned char)201;
unsigned char var_11 = (unsigned char)64;
long long int var_12 = -4282104768565006864LL;
long long int var_13 = -6737693560458030170LL;
unsigned long long int var_15 = 8367618799099041269ULL;
int zero = 0;
int var_16 = 350022885;
long long int var_17 = -593611742894033240LL;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)197;
unsigned int var_20 = 1967798789U;
unsigned short var_21 = (unsigned short)11642;
signed char var_22 = (signed char)7;
unsigned int var_23 = 2286822513U;
long long int var_24 = 1387114787470071845LL;
short var_25 = (short)-5988;
unsigned char arr_1 [14] ;
long long int arr_2 [14] ;
long long int arr_13 [14] [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 8974875335090236190LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? -6399131119554749689LL : -9196692445917066787LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
