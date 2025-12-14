#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47160;
int var_2 = 478444341;
long long int var_14 = 2664697711502168025LL;
signed char var_15 = (signed char)31;
int zero = 0;
unsigned short var_16 = (unsigned short)41327;
signed char var_17 = (signed char)-107;
signed char var_18 = (signed char)26;
unsigned int var_19 = 1249455576U;
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
