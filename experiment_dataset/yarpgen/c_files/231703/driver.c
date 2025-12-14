#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1995945239;
unsigned long long int var_6 = 9091841237919350248ULL;
signed char var_14 = (signed char)49;
int zero = 0;
unsigned char var_15 = (unsigned char)106;
short var_16 = (short)-23342;
signed char var_17 = (signed char)98;
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
