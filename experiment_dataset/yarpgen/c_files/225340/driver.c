#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5628050009613408645LL;
unsigned int var_4 = 1245273019U;
unsigned int var_5 = 903707144U;
int zero = 0;
signed char var_12 = (signed char)-10;
short var_13 = (short)-10586;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
