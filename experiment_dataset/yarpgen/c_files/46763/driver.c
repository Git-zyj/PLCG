#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 536647023157245448ULL;
short var_2 = (short)11377;
unsigned long long int var_5 = 3371428623777000762ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)32853;
unsigned int var_15 = 2282173960U;
short var_16 = (short)-26860;
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
