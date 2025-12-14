#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)118;
unsigned long long int var_5 = 1073342681088531084ULL;
unsigned char var_9 = (unsigned char)44;
int zero = 0;
short var_15 = (short)31861;
short var_16 = (short)15583;
int var_17 = -706749508;
void init() {
}

void checksum() {
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
