#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 961290604;
long long int var_8 = -8525857289271353430LL;
unsigned long long int var_13 = 644421667221031809ULL;
int zero = 0;
int var_15 = 742683479;
short var_16 = (short)-28959;
unsigned char var_17 = (unsigned char)23;
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
