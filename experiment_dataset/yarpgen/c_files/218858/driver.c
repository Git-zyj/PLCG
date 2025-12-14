#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)142;
int var_13 = 1187500814;
unsigned char var_15 = (unsigned char)244;
int zero = 0;
unsigned char var_16 = (unsigned char)7;
unsigned long long int var_17 = 3417228805036907097ULL;
unsigned char var_18 = (unsigned char)197;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
