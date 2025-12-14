#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8870826173912202510LL;
short var_2 = (short)-8579;
short var_6 = (short)-21549;
unsigned short var_9 = (unsigned short)60544;
int var_10 = 1926935748;
signed char var_11 = (signed char)-108;
signed char var_17 = (signed char)105;
int zero = 0;
int var_19 = -670710303;
short var_20 = (short)10346;
void init() {
}

void checksum() {
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
