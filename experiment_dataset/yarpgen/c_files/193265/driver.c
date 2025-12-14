#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6339579487940440818ULL;
unsigned long long int var_1 = 3364655305274982162ULL;
int var_3 = 1707413168;
short var_4 = (short)-14317;
long long int var_12 = 5525331573914452929LL;
int zero = 0;
unsigned char var_13 = (unsigned char)130;
unsigned short var_14 = (unsigned short)45000;
unsigned int var_15 = 1123256949U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
