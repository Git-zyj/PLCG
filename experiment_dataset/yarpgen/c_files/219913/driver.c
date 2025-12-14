#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13855841997314125007ULL;
unsigned int var_1 = 4109388521U;
short var_2 = (short)28818;
unsigned char var_8 = (unsigned char)101;
unsigned int var_12 = 3650076326U;
int zero = 0;
long long int var_15 = -8419762304319437446LL;
unsigned char var_16 = (unsigned char)135;
unsigned int var_17 = 419150846U;
unsigned int var_18 = 808948665U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
