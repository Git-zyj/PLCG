#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-68;
unsigned int var_9 = 3109343413U;
short var_10 = (short)-27863;
short var_11 = (short)14958;
int zero = 0;
unsigned long long int var_14 = 15347791502189683765ULL;
unsigned long long int var_15 = 2406221672538397969ULL;
short var_16 = (short)-2456;
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
