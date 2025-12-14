#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23414;
short var_2 = (short)-25319;
int var_3 = -688696503;
unsigned char var_9 = (unsigned char)30;
int zero = 0;
short var_11 = (short)32107;
unsigned long long int var_12 = 12148254535100302226ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
