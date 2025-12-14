#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4169637454U;
unsigned short var_1 = (unsigned short)19276;
unsigned short var_7 = (unsigned short)417;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)24158;
unsigned char var_11 = (unsigned char)239;
int zero = 0;
int var_12 = 1708671259;
unsigned int var_13 = 3753358646U;
_Bool var_14 = (_Bool)0;
int var_15 = -2023686633;
unsigned short var_16 = (unsigned short)34620;
long long int arr_3 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 5294625055439885569LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
