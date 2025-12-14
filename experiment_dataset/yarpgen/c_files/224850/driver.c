#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 463326990;
unsigned int var_4 = 2694148450U;
short var_6 = (short)26855;
int var_9 = 45269137;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 195449212U;
void init() {
}

void checksum() {
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
