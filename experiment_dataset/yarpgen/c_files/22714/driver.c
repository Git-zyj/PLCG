#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-57;
unsigned long long int var_4 = 17505675715291550556ULL;
unsigned char var_8 = (unsigned char)222;
short var_9 = (short)-19504;
int zero = 0;
unsigned int var_15 = 2594323237U;
unsigned int var_16 = 325832579U;
void init() {
}

void checksum() {
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
