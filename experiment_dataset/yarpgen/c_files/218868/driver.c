#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 859844477U;
long long int var_4 = 1718974399388751543LL;
signed char var_9 = (signed char)44;
int zero = 0;
unsigned int var_15 = 2713772670U;
unsigned long long int var_16 = 2535896882699990419ULL;
unsigned char var_17 = (unsigned char)101;
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
