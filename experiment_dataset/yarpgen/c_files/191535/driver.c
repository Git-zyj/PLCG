#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_5 = -3833727982826875896LL;
long long int var_6 = 2430427857225191608LL;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)163;
unsigned int var_14 = 3178914053U;
unsigned int var_15 = 2130031870U;
int var_16 = -1872996085;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
