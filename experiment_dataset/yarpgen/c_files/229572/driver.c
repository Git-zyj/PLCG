#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2149664417378425112ULL;
signed char var_3 = (signed char)88;
short var_8 = (short)5529;
signed char var_13 = (signed char)-79;
short var_15 = (short)-15701;
unsigned short var_16 = (unsigned short)46446;
int zero = 0;
unsigned short var_18 = (unsigned short)43691;
signed char var_19 = (signed char)-82;
void init() {
}

void checksum() {
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
