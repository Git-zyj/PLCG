#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 5631941135545872132ULL;
unsigned int var_6 = 3824744769U;
unsigned long long int var_13 = 7855800897943889824ULL;
int zero = 0;
signed char var_16 = (signed char)-48;
unsigned char var_17 = (unsigned char)172;
unsigned char var_18 = (unsigned char)174;
unsigned long long int var_19 = 5214043723467369998ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
