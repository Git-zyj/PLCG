#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3292188724735028846LL;
short var_1 = (short)-32534;
unsigned short var_15 = (unsigned short)37183;
int zero = 0;
long long int var_16 = 7393700446860225613LL;
unsigned long long int var_17 = 4164737283051063301ULL;
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
