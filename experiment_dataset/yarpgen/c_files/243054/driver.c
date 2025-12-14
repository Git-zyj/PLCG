#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5344;
unsigned char var_2 = (unsigned char)139;
int var_3 = 1358390129;
_Bool var_5 = (_Bool)0;
unsigned int var_10 = 2659527926U;
unsigned int var_16 = 2584690220U;
int zero = 0;
int var_18 = 705639474;
short var_19 = (short)-8139;
unsigned int var_20 = 3548939112U;
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
