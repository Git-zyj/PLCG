#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7148049838388065266LL;
unsigned char var_5 = (unsigned char)139;
signed char var_7 = (signed char)9;
unsigned short var_11 = (unsigned short)140;
signed char var_12 = (signed char)70;
long long int var_14 = -9173903204111621830LL;
int zero = 0;
unsigned long long int var_15 = 14281935692187154647ULL;
short var_16 = (short)5594;
short var_17 = (short)16475;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
