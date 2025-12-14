#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1258128169;
unsigned char var_5 = (unsigned char)158;
int var_7 = -1229996138;
int var_12 = -363792798;
int zero = 0;
unsigned short var_13 = (unsigned short)2954;
short var_14 = (short)-2742;
short var_15 = (short)9044;
unsigned short var_16 = (unsigned short)8919;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)51527;
short arr_2 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)15099;
}

void checksum() {
    hash(&seed, var_13);
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
