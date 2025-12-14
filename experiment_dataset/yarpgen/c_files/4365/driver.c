#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)5175;
long long int var_7 = 6860414135033657050LL;
unsigned short var_13 = (unsigned short)12572;
int zero = 0;
unsigned int var_20 = 2610231203U;
unsigned short var_21 = (unsigned short)61705;
unsigned short var_22 = (unsigned short)2432;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
