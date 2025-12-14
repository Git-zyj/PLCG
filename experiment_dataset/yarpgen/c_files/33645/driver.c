#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)42065;
unsigned short var_9 = (unsigned short)18030;
unsigned short var_10 = (unsigned short)19222;
int zero = 0;
short var_12 = (short)4949;
short var_13 = (short)4962;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 9349860556317913759ULL;
unsigned int var_16 = 2816416269U;
unsigned char var_17 = (unsigned char)109;
unsigned char arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)182;
}

void checksum() {
    hash(&seed, var_12);
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
