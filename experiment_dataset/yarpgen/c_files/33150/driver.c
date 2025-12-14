#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2208558261U;
short var_7 = (short)-17543;
unsigned long long int var_13 = 16840006661455800056ULL;
short var_18 = (short)10167;
int zero = 0;
signed char var_20 = (signed char)-68;
signed char var_21 = (signed char)-34;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
