#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)42541;
long long int var_4 = -1760225386580069014LL;
long long int var_5 = -1387218126874889686LL;
unsigned char var_7 = (unsigned char)158;
long long int var_8 = 4973330513396242725LL;
unsigned int var_11 = 1564088944U;
signed char var_12 = (signed char)60;
int zero = 0;
long long int var_13 = 6981958712412087715LL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)53096;
unsigned char var_16 = (unsigned char)225;
unsigned int var_17 = 3696711744U;
short arr_2 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-18429;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
