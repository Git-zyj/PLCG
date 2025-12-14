#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)159;
_Bool var_2 = (_Bool)1;
short var_7 = (short)23873;
unsigned char var_9 = (unsigned char)225;
int zero = 0;
int var_12 = -841941788;
unsigned long long int var_13 = 788137323781891912ULL;
unsigned int var_14 = 2924611601U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
