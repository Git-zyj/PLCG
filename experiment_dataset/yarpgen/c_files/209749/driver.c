#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)7;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 5745132344594051023ULL;
unsigned int var_7 = 4201361982U;
unsigned long long int var_10 = 362052633326838119ULL;
int zero = 0;
unsigned long long int var_11 = 8327533159437746786ULL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
