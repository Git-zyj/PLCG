#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)14170;
signed char var_7 = (signed char)45;
short var_12 = (short)-14609;
int zero = 0;
signed char var_16 = (signed char)86;
signed char var_17 = (signed char)-72;
unsigned int var_18 = 3567243807U;
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
