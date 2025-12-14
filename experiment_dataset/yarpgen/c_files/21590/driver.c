#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 7145138763889217104ULL;
int var_3 = -1655875536;
unsigned int var_7 = 2350360741U;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-230;
int var_19 = 1933818968;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
