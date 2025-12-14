#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 10534617722003468003ULL;
short var_7 = (short)-5372;
signed char var_8 = (signed char)35;
unsigned int var_12 = 1864629972U;
int zero = 0;
unsigned int var_19 = 270742393U;
unsigned int var_20 = 383985120U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
