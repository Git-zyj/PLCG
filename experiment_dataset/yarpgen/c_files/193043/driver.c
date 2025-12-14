#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6965613203145038933ULL;
unsigned char var_10 = (unsigned char)22;
unsigned char var_12 = (unsigned char)152;
long long int var_14 = -7894347355564058460LL;
int zero = 0;
unsigned short var_15 = (unsigned short)40995;
int var_16 = 1698097604;
unsigned short var_17 = (unsigned short)49186;
unsigned short var_18 = (unsigned short)20023;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
