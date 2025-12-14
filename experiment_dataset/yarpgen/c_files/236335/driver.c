#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27769;
unsigned short var_5 = (unsigned short)60757;
unsigned short var_7 = (unsigned short)38003;
int zero = 0;
unsigned long long int var_15 = 11552602363709148743ULL;
short var_16 = (short)-1024;
signed char var_17 = (signed char)36;
unsigned long long int var_18 = 6535813097391742086ULL;
void init() {
}

void checksum() {
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
