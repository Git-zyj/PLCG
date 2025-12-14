#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)28349;
short var_5 = (short)-30703;
int var_9 = -2087254080;
int var_13 = -579187125;
int zero = 0;
unsigned short var_16 = (unsigned short)8385;
short var_17 = (short)21377;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
