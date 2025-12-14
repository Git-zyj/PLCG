#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3082236625U;
unsigned char var_3 = (unsigned char)122;
unsigned short var_5 = (unsigned short)24958;
long long int var_6 = -3162455266736620876LL;
long long int var_9 = 5940247028508476937LL;
int zero = 0;
unsigned long long int var_13 = 1306514759746103096ULL;
long long int var_14 = 5541155392660217724LL;
unsigned char var_15 = (unsigned char)123;
unsigned short var_16 = (unsigned short)65302;
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
