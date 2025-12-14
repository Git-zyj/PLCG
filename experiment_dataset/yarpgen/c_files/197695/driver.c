#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4617518255455074470LL;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-26259;
unsigned char var_5 = (unsigned char)47;
int var_8 = 637013328;
int zero = 0;
unsigned int var_10 = 2450151551U;
unsigned short var_11 = (unsigned short)55919;
unsigned char var_12 = (unsigned char)248;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
