#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-1748;
unsigned char var_4 = (unsigned char)141;
int var_6 = -1670825480;
signed char var_14 = (signed char)71;
int zero = 0;
int var_17 = -1673388907;
signed char var_18 = (signed char)-82;
unsigned int var_19 = 3466851255U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
