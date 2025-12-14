#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_8 = 1546753060U;
_Bool var_12 = (_Bool)1;
short var_16 = (short)-31342;
int zero = 0;
unsigned long long int var_18 = 17403051388810848638ULL;
unsigned int var_19 = 1380913331U;
unsigned short var_20 = (unsigned short)61260;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
