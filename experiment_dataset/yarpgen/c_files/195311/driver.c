#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-30;
signed char var_7 = (signed char)67;
signed char var_8 = (signed char)-124;
int var_9 = 578683207;
short var_12 = (short)-21577;
int zero = 0;
unsigned int var_14 = 689932311U;
int var_15 = 1556648802;
int var_16 = 228940787;
unsigned char var_17 = (unsigned char)114;
long long int var_18 = -6751307920025365355LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
