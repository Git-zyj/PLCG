#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-16;
unsigned short var_3 = (unsigned short)59774;
short var_11 = (short)-25380;
int var_16 = 780553019;
int zero = 0;
int var_18 = 1316820282;
signed char var_19 = (signed char)59;
short var_20 = (short)-19611;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
