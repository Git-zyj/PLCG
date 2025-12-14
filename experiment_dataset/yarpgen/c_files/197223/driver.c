#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -25135823;
short var_8 = (short)-12991;
int zero = 0;
signed char var_17 = (signed char)-19;
unsigned long long int var_18 = 1534974986930843324ULL;
int var_19 = -1715982440;
unsigned short var_20 = (unsigned short)9166;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
