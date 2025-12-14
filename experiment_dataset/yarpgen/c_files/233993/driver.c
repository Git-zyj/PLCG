#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3820396381U;
int var_4 = -1020695270;
int var_7 = -886713937;
unsigned int var_11 = 1496612041U;
int zero = 0;
unsigned char var_14 = (unsigned char)110;
int var_15 = 557106357;
short var_16 = (short)25743;
void init() {
}

void checksum() {
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
