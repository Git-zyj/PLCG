#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1724468374;
signed char var_2 = (signed char)-53;
unsigned char var_3 = (unsigned char)227;
unsigned long long int var_4 = 2297116998025870093ULL;
int var_7 = 1139091391;
unsigned int var_12 = 1635113932U;
int zero = 0;
short var_14 = (short)-27333;
signed char var_15 = (signed char)-79;
unsigned char var_16 = (unsigned char)243;
unsigned long long int var_17 = 17816002271723924844ULL;
short var_18 = (short)-9257;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
