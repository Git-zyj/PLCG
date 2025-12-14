#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13472552323365646145ULL;
unsigned int var_1 = 6967179U;
unsigned int var_4 = 1986212950U;
unsigned int var_7 = 1255178435U;
int zero = 0;
unsigned char var_13 = (unsigned char)34;
unsigned int var_14 = 248961149U;
int var_15 = -323076926;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
