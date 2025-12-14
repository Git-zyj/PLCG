#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-46;
unsigned short var_3 = (unsigned short)32726;
signed char var_5 = (signed char)75;
unsigned short var_10 = (unsigned short)53643;
int zero = 0;
unsigned short var_15 = (unsigned short)57455;
unsigned short var_16 = (unsigned short)42833;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
