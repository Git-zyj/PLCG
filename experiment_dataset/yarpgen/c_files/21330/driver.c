#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)63197;
unsigned int var_8 = 1211679197U;
unsigned short var_9 = (unsigned short)4078;
int zero = 0;
unsigned long long int var_13 = 17270361024614020002ULL;
unsigned short var_14 = (unsigned short)2359;
signed char var_15 = (signed char)-16;
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
