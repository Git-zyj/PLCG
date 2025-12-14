#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)103;
signed char var_8 = (signed char)28;
unsigned short var_9 = (unsigned short)19414;
int var_11 = 2031567406;
long long int var_14 = 6843770023957861662LL;
int zero = 0;
unsigned short var_19 = (unsigned short)34981;
unsigned int var_20 = 2263409306U;
int var_21 = -497915065;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
