#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -890395443;
signed char var_8 = (signed char)108;
unsigned char var_10 = (unsigned char)139;
int zero = 0;
unsigned char var_17 = (unsigned char)251;
int var_18 = -1671621525;
signed char var_19 = (signed char)85;
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
