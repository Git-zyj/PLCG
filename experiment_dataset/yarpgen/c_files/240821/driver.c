#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)23802;
int zero = 0;
unsigned short var_19 = (unsigned short)4187;
unsigned int var_20 = 3839757345U;
unsigned short var_21 = (unsigned short)46451;
short var_22 = (short)-30190;
unsigned short var_23 = (unsigned short)62027;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
