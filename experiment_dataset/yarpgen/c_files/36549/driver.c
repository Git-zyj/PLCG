#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2505810304U;
short var_4 = (short)19054;
unsigned short var_5 = (unsigned short)30563;
unsigned int var_6 = 749972302U;
short var_9 = (short)-11763;
short var_14 = (short)4472;
int zero = 0;
unsigned int var_15 = 2969710522U;
int var_16 = 735842103;
short var_17 = (short)-25666;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
