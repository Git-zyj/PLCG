#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3618437447618547814ULL;
unsigned short var_3 = (unsigned short)13914;
unsigned short var_5 = (unsigned short)58787;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)44424;
unsigned char var_12 = (unsigned char)60;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)(-127 - 1);
unsigned char var_17 = (unsigned char)223;
unsigned short var_18 = (unsigned short)2458;
unsigned long long int var_19 = 12229310891050246334ULL;
unsigned long long int var_20 = 9597018969061859799ULL;
_Bool arr_3 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
