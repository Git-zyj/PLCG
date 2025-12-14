#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-78;
unsigned short var_6 = (unsigned short)23431;
unsigned long long int var_8 = 13391820342784675478ULL;
unsigned long long int var_12 = 11085382904795772072ULL;
int zero = 0;
short var_13 = (short)-2228;
int var_14 = 1315758382;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
