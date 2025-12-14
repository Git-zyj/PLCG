#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -2067918170963178704LL;
unsigned int var_12 = 3509369306U;
unsigned long long int var_13 = 15460372787604993384ULL;
int zero = 0;
short var_14 = (short)28551;
long long int var_15 = -3743717686945551516LL;
signed char var_16 = (signed char)-124;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
