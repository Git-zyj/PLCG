#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2780469476U;
_Bool var_4 = (_Bool)0;
int var_7 = -703997124;
long long int var_8 = 1282692458609061236LL;
unsigned short var_11 = (unsigned short)721;
unsigned int var_14 = 4249447639U;
int zero = 0;
unsigned short var_15 = (unsigned short)24348;
unsigned short var_16 = (unsigned short)50316;
unsigned short var_17 = (unsigned short)26920;
unsigned short var_18 = (unsigned short)30692;
signed char var_19 = (signed char)63;
_Bool arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
