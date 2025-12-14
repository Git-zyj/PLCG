#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 686568660;
unsigned short var_2 = (unsigned short)58771;
unsigned char var_3 = (unsigned char)130;
int zero = 0;
int var_14 = 1533906773;
unsigned long long int var_15 = 7799196953819718618ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
