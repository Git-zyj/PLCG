#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26835;
long long int var_1 = 5226691724471641379LL;
long long int var_2 = -2199417823725210741LL;
unsigned char var_3 = (unsigned char)134;
int var_4 = 1976484160;
long long int var_6 = -3334341176826920962LL;
unsigned int var_7 = 963449868U;
unsigned char var_8 = (unsigned char)239;
unsigned int var_10 = 3383285073U;
unsigned int var_11 = 1003422000U;
unsigned short var_12 = (unsigned short)20722;
unsigned short var_14 = (unsigned short)26300;
unsigned long long int var_15 = 1811972858782372715ULL;
int zero = 0;
unsigned int var_16 = 3791118926U;
short var_17 = (short)19741;
unsigned long long int var_18 = 1669223128759285274ULL;
unsigned short var_19 = (unsigned short)6715;
short var_20 = (short)31773;
long long int var_21 = 2428431334108890930LL;
unsigned char var_22 = (unsigned char)61;
signed char var_23 = (signed char)84;
signed char arr_0 [18] ;
int arr_3 [18] [18] ;
short arr_11 [18] [18] [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 206108376;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (short)29975 : (short)-14242;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
