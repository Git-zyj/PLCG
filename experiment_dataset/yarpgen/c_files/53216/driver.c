#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12952354424963941148ULL;
unsigned int var_1 = 2308000591U;
unsigned int var_2 = 2793172850U;
unsigned char var_3 = (unsigned char)151;
short var_4 = (short)-24914;
unsigned int var_5 = 442630561U;
unsigned int var_10 = 290553091U;
unsigned int var_12 = 2085661528U;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)64;
unsigned char var_15 = (unsigned char)7;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
