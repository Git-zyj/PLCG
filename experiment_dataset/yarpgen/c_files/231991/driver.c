#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10479068601581896969ULL;
short var_4 = (short)-28815;
short var_11 = (short)4466;
int zero = 0;
signed char var_16 = (signed char)27;
signed char var_17 = (signed char)-98;
unsigned char var_18 = (unsigned char)213;
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
