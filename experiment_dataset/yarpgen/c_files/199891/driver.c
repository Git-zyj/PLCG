#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 796054900U;
short var_7 = (short)31875;
int zero = 0;
unsigned long long int var_10 = 2317520367931022594ULL;
long long int var_11 = -6114641475295993358LL;
unsigned short var_12 = (unsigned short)3467;
unsigned long long int var_13 = 2003250942033489730ULL;
int var_14 = 457514782;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
