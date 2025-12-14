#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5647633568009062180LL;
unsigned char var_11 = (unsigned char)128;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)178;
int var_16 = -377559310;
int zero = 0;
unsigned short var_17 = (unsigned short)25312;
int var_18 = -1818372048;
unsigned char var_19 = (unsigned char)201;
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
