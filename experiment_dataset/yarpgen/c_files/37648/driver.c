#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-31;
unsigned short var_5 = (unsigned short)64204;
int var_6 = 490004589;
int var_11 = 1132425305;
int zero = 0;
short var_16 = (short)-17061;
signed char var_17 = (signed char)77;
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
