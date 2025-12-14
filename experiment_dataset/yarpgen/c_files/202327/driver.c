#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1009606778;
unsigned short var_2 = (unsigned short)35469;
unsigned short var_4 = (unsigned short)18815;
int var_6 = -365248244;
unsigned short var_7 = (unsigned short)38022;
short var_10 = (short)-20870;
short var_12 = (short)-24912;
_Bool var_13 = (_Bool)0;
int var_14 = -325086191;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_18 = (short)11123;
int var_19 = 1900694574;
unsigned short var_20 = (unsigned short)1856;
unsigned char var_21 = (unsigned char)238;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
long long int var_24 = -2067540532133432399LL;
long long int arr_7 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -6728982294921149924LL : 4999207998997243667LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
