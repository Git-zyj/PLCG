#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 13932876446983505313ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_13 = (unsigned short)44544;
short var_14 = (short)-10018;
short var_16 = (short)-4405;
int zero = 0;
unsigned int var_18 = 1082163136U;
unsigned short var_19 = (unsigned short)21427;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
