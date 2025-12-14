#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5602;
signed char var_4 = (signed char)-38;
signed char var_9 = (signed char)0;
unsigned char var_11 = (unsigned char)231;
int zero = 0;
short var_16 = (short)19918;
unsigned short var_17 = (unsigned short)54228;
void init() {
}

void checksum() {
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
