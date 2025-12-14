#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-109;
int var_1 = 461657713;
unsigned long long int var_3 = 488229783157592018ULL;
unsigned long long int var_6 = 5664998512182264330ULL;
unsigned long long int var_7 = 1457608260869315668ULL;
short var_8 = (short)-22054;
int zero = 0;
short var_17 = (short)-12959;
signed char var_18 = (signed char)118;
short var_19 = (short)28563;
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
