#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1074880116;
unsigned char var_4 = (unsigned char)187;
long long int var_5 = -8919692157965759526LL;
int var_11 = -291419250;
unsigned int var_16 = 597657673U;
int zero = 0;
unsigned int var_20 = 3616992626U;
unsigned long long int var_21 = 7511096516389949921ULL;
void init() {
}

void checksum() {
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
