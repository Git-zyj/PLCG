#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 15198860035349736032ULL;
unsigned char var_12 = (unsigned char)65;
short var_13 = (short)4139;
int var_14 = 1014619813;
int var_15 = 1690976362;
int zero = 0;
int var_16 = 1477848768;
unsigned long long int var_17 = 17449135981325651701ULL;
void init() {
}

void checksum() {
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
