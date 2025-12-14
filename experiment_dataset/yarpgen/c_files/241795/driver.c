#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
unsigned char var_1 = (unsigned char)110;
unsigned int var_3 = 2210453592U;
long long int var_6 = 8561427955951236794LL;
int var_10 = 1309745660;
unsigned long long int var_15 = 15880860085774072679ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)133;
unsigned char var_17 = (unsigned char)186;
int var_18 = -1735247299;
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
