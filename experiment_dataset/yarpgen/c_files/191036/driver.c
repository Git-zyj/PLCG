#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 942494953547327816ULL;
long long int var_4 = -5788287004256838852LL;
unsigned int var_6 = 3433901743U;
unsigned long long int var_8 = 10559959619128847153ULL;
short var_10 = (short)-16130;
int zero = 0;
int var_12 = -1591909136;
unsigned char var_13 = (unsigned char)220;
void init() {
}

void checksum() {
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
