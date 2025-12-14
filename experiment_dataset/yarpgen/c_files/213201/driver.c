#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18042011026001384632ULL;
long long int var_12 = -7110874613126237821LL;
unsigned short var_15 = (unsigned short)10382;
unsigned long long int var_16 = 15461951856355283686ULL;
int var_17 = -1557637597;
int zero = 0;
unsigned char var_19 = (unsigned char)15;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
