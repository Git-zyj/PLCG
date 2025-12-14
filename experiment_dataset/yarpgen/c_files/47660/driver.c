#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)14926;
unsigned long long int var_14 = 11111892104960496618ULL;
short var_15 = (short)29432;
int zero = 0;
short var_16 = (short)-14455;
short var_17 = (short)31578;
signed char var_18 = (signed char)-45;
void init() {
}

void checksum() {
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
