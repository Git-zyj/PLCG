#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1707739845U;
unsigned char var_5 = (unsigned char)144;
signed char var_9 = (signed char)8;
unsigned long long int var_14 = 10274370289184518557ULL;
int zero = 0;
unsigned long long int var_18 = 13889321214365990906ULL;
signed char var_19 = (signed char)119;
short var_20 = (short)25593;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
