#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)28075;
short var_5 = (short)10991;
long long int var_14 = 6773261751927378774LL;
signed char var_15 = (signed char)62;
int zero = 0;
unsigned long long int var_17 = 3900520657174249401ULL;
int var_18 = -1298585831;
unsigned char var_19 = (unsigned char)32;
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
