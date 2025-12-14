#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8461511997797290679LL;
unsigned short var_3 = (unsigned short)63190;
unsigned char var_11 = (unsigned char)253;
unsigned long long int var_12 = 16845732386281118788ULL;
short var_15 = (short)-6717;
unsigned short var_16 = (unsigned short)2216;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
