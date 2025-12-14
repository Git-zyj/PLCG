#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2770987624U;
signed char var_3 = (signed char)81;
unsigned long long int var_4 = 2506987425807223569ULL;
unsigned int var_6 = 1942551442U;
unsigned short var_10 = (unsigned short)37540;
signed char var_11 = (signed char)107;
int zero = 0;
unsigned long long int var_13 = 11276569173063112332ULL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)31258;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
