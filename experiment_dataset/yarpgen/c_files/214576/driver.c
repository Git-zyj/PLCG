#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-100;
long long int var_5 = 8839758231456547230LL;
int var_6 = 349569628;
int var_7 = 1496178806;
unsigned short var_12 = (unsigned short)59494;
int zero = 0;
unsigned short var_18 = (unsigned short)64974;
signed char var_19 = (signed char)40;
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
