#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3397715935107054866LL;
int var_2 = -1464975438;
long long int var_6 = 8331556860420265897LL;
unsigned char var_7 = (unsigned char)66;
int var_8 = -224135466;
int var_12 = 963799961;
int var_13 = 2002016216;
int var_16 = -50256286;
int zero = 0;
unsigned char var_19 = (unsigned char)139;
unsigned int var_20 = 251289100U;
long long int var_21 = -6400101931299854187LL;
long long int var_22 = -547094029137816958LL;
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
