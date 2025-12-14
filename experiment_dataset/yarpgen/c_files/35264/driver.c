#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8811568505131852666ULL;
unsigned char var_1 = (unsigned char)1;
unsigned char var_5 = (unsigned char)62;
unsigned int var_8 = 1871783672U;
unsigned char var_9 = (unsigned char)35;
long long int var_13 = 8137438199524234205LL;
unsigned long long int var_16 = 12158226182640291842ULL;
int zero = 0;
unsigned int var_20 = 566195831U;
unsigned char var_21 = (unsigned char)100;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
