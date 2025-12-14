#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)29145;
long long int var_8 = 6663405095792823913LL;
unsigned long long int var_10 = 9470869644329684030ULL;
unsigned int var_12 = 2122578517U;
unsigned long long int var_14 = 6968177603326412564ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)170;
short var_17 = (short)-18169;
int var_18 = -1138701841;
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
