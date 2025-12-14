#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)17495;
unsigned char var_5 = (unsigned char)96;
unsigned int var_15 = 1858177785U;
unsigned int var_18 = 771230125U;
int zero = 0;
signed char var_20 = (signed char)-73;
long long int var_21 = 8335330503671791927LL;
unsigned long long int var_22 = 12684280420913744199ULL;
unsigned int var_23 = 303685149U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
