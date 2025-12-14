#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 2156163185U;
int var_10 = -862100372;
short var_12 = (short)-14620;
int zero = 0;
unsigned int var_18 = 1295802338U;
unsigned long long int var_19 = 17933375415349389107ULL;
unsigned short var_20 = (unsigned short)63983;
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
