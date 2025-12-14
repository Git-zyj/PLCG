#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)10;
unsigned int var_6 = 2858582212U;
short var_11 = (short)8525;
unsigned char var_12 = (unsigned char)139;
unsigned char var_13 = (unsigned char)86;
int zero = 0;
unsigned char var_14 = (unsigned char)26;
short var_15 = (short)11276;
unsigned char var_16 = (unsigned char)9;
_Bool var_17 = (_Bool)1;
short var_18 = (short)21111;
_Bool arr_2 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
