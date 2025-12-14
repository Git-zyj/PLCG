#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)58;
unsigned short var_5 = (unsigned short)26971;
int var_6 = -973943399;
unsigned long long int var_8 = 11911342256955959037ULL;
int var_14 = -650295923;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 1453378458;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
