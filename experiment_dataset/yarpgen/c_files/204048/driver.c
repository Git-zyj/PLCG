#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)63284;
unsigned char var_10 = (unsigned char)83;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 1681390467103921305ULL;
unsigned long long int var_18 = 11164702356359140619ULL;
unsigned short var_19 = (unsigned short)29438;
_Bool var_20 = (_Bool)0;
_Bool arr_0 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
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
