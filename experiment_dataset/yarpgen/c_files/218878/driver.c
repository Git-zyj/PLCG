#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -536257926;
short var_2 = (short)22669;
signed char var_11 = (signed char)19;
unsigned long long int var_12 = 15230105322038514203ULL;
int zero = 0;
long long int var_16 = -227634286624375698LL;
signed char var_17 = (signed char)-95;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
