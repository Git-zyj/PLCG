#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)2345;
long long int var_8 = 4729912434076367816LL;
short var_11 = (short)-12844;
int zero = 0;
unsigned int var_12 = 4214720398U;
unsigned int var_13 = 1552615005U;
short var_14 = (short)21641;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
