#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13561407996262371930ULL;
signed char var_3 = (signed char)17;
unsigned short var_6 = (unsigned short)25272;
short var_7 = (short)19797;
unsigned long long int var_9 = 15090480370903739668ULL;
unsigned short var_12 = (unsigned short)10752;
int zero = 0;
short var_13 = (short)22067;
unsigned int var_14 = 1770850211U;
unsigned short var_15 = (unsigned short)59184;
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
