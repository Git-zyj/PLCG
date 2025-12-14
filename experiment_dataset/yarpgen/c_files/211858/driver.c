#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3400117459U;
int var_3 = -706309557;
unsigned int var_4 = 2476329938U;
int var_5 = -897087498;
unsigned long long int var_6 = 6887736238125114677ULL;
short var_7 = (short)-18177;
unsigned int var_10 = 1023306216U;
long long int var_11 = -2680332789801086207LL;
long long int var_12 = 5160191870202918337LL;
int zero = 0;
signed char var_13 = (signed char)56;
signed char var_14 = (signed char)-47;
unsigned char var_15 = (unsigned char)230;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
