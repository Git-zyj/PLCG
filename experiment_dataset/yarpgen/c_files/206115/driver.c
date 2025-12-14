#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2994291070U;
short var_1 = (short)-6975;
unsigned short var_6 = (unsigned short)62298;
unsigned short var_8 = (unsigned short)52852;
int zero = 0;
signed char var_15 = (signed char)125;
signed char var_16 = (signed char)-30;
unsigned short var_17 = (unsigned short)22424;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
