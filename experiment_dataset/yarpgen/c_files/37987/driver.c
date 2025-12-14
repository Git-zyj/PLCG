#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)17087;
int var_7 = 1532081215;
signed char var_8 = (signed char)23;
unsigned short var_10 = (unsigned short)54805;
short var_14 = (short)-2041;
unsigned short var_16 = (unsigned short)37800;
int zero = 0;
short var_17 = (short)18982;
signed char var_18 = (signed char)-68;
unsigned short var_19 = (unsigned short)37805;
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
