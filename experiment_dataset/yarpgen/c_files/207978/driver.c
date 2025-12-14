#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15944202597918899038ULL;
unsigned long long int var_9 = 8359989924246087150ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)78;
unsigned int var_16 = 1029413885U;
unsigned char var_17 = (unsigned char)205;
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
