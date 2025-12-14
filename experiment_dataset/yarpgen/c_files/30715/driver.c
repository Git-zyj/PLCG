#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20665;
short var_7 = (short)-25951;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 3074556508U;
int zero = 0;
unsigned long long int var_12 = 13429355592941308689ULL;
unsigned short var_13 = (unsigned short)16600;
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
