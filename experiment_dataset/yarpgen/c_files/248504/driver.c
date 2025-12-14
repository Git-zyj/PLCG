#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3572405766U;
long long int var_2 = -4637377461382647882LL;
unsigned char var_4 = (unsigned char)92;
unsigned short var_16 = (unsigned short)6090;
int zero = 0;
long long int var_20 = -4230129817097652879LL;
long long int var_21 = -6907866836927056952LL;
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
