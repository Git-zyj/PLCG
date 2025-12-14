#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1355463143;
unsigned char var_4 = (unsigned char)130;
unsigned char var_5 = (unsigned char)79;
short var_6 = (short)-13598;
signed char var_7 = (signed char)-43;
short var_8 = (short)32341;
int zero = 0;
short var_10 = (short)-13524;
unsigned long long int var_11 = 16516413170361452926ULL;
short var_12 = (short)-12854;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
