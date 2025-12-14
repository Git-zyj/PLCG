#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)103;
signed char var_7 = (signed char)17;
signed char var_8 = (signed char)56;
signed char var_11 = (signed char)32;
short var_13 = (short)-828;
int zero = 0;
unsigned char var_19 = (unsigned char)81;
int var_20 = 197374382;
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
