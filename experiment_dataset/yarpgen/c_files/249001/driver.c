#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 116138992;
unsigned short var_1 = (unsigned short)28459;
unsigned long long int var_3 = 4282217464024447817ULL;
unsigned char var_8 = (unsigned char)252;
short var_9 = (short)14105;
int zero = 0;
unsigned char var_11 = (unsigned char)13;
unsigned long long int var_12 = 11863268537478805649ULL;
unsigned long long int var_13 = 12563210584335753933ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
