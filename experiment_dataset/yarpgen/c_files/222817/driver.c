#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 12462084149280250910ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)30599;
unsigned char var_20 = (unsigned char)134;
unsigned long long int var_21 = 5635822417489052701ULL;
unsigned char var_22 = (unsigned char)85;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
