#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1246126853U;
unsigned int var_3 = 137731494U;
short var_6 = (short)-895;
int var_8 = 1037214323;
short var_11 = (short)-25260;
long long int var_17 = -6759444556613088444LL;
int var_18 = -108005314;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-67;
unsigned int var_21 = 3495570202U;
unsigned int var_22 = 2458141957U;
signed char var_23 = (signed char)70;
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
