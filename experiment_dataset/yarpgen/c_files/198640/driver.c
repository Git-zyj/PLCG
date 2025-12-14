#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64184;
unsigned long long int var_1 = 17349127889217162019ULL;
unsigned long long int var_4 = 6792957845452483791ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 12338737130360100022ULL;
unsigned long long int var_12 = 6172974132773897687ULL;
short var_13 = (short)-32184;
unsigned long long int var_14 = 13255512781028327906ULL;
int zero = 0;
unsigned long long int var_15 = 6677514943981975857ULL;
unsigned long long int var_16 = 3289117209810487320ULL;
void init() {
}

void checksum() {
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
