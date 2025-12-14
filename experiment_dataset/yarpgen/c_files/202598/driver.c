#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6641071914760377181ULL;
int var_2 = 83639826;
int var_4 = -528427501;
unsigned long long int var_6 = 8522360542080538186ULL;
unsigned char var_9 = (unsigned char)183;
unsigned long long int var_12 = 15223860459475874097ULL;
int var_13 = -151744487;
unsigned short var_16 = (unsigned short)64221;
int zero = 0;
unsigned char var_19 = (unsigned char)50;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-12456;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
