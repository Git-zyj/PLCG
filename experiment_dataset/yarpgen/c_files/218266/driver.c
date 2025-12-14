#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9958714420886772684ULL;
unsigned short var_5 = (unsigned short)39910;
int var_14 = 2132066229;
int zero = 0;
unsigned long long int var_18 = 8363960179804274323ULL;
unsigned char var_19 = (unsigned char)1;
unsigned short var_20 = (unsigned short)52969;
void init() {
}

void checksum() {
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
