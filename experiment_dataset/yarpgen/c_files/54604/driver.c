#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1733837237524281174ULL;
unsigned int var_9 = 1307499500U;
short var_15 = (short)13407;
int zero = 0;
unsigned short var_17 = (unsigned short)58203;
long long int var_18 = -4653117922580257224LL;
void init() {
}

void checksum() {
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
