#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 4408999025364855677ULL;
signed char var_12 = (signed char)-43;
unsigned short var_18 = (unsigned short)31690;
int zero = 0;
signed char var_19 = (signed char)104;
int var_20 = 273334023;
void init() {
}

void checksum() {
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
