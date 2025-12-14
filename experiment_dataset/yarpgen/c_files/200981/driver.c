#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13415272314551483859ULL;
short var_2 = (short)-19423;
unsigned long long int var_5 = 2604328850002314583ULL;
int zero = 0;
unsigned long long int var_17 = 5964656214323286343ULL;
short var_18 = (short)-16801;
unsigned short var_19 = (unsigned short)45274;
unsigned short var_20 = (unsigned short)55842;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
