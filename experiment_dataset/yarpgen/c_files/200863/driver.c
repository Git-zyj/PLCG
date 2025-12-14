#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7570535400223622590ULL;
signed char var_7 = (signed char)59;
signed char var_11 = (signed char)24;
int zero = 0;
unsigned long long int var_12 = 17155326018069095296ULL;
unsigned short var_13 = (unsigned short)9721;
short var_14 = (short)6844;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
