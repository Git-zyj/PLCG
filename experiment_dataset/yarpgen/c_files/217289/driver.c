#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8844892822140681254LL;
unsigned long long int var_3 = 13249967377956957001ULL;
unsigned short var_10 = (unsigned short)20975;
int zero = 0;
unsigned long long int var_13 = 8030244367570723004ULL;
unsigned short var_14 = (unsigned short)6048;
int var_15 = 966859643;
unsigned char var_16 = (unsigned char)207;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
