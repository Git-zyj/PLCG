#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9795;
unsigned int var_1 = 3726241697U;
unsigned char var_3 = (unsigned char)218;
unsigned short var_5 = (unsigned short)57168;
short var_6 = (short)-5683;
long long int var_11 = 8177785520014252333LL;
unsigned short var_12 = (unsigned short)26520;
unsigned char var_13 = (unsigned char)252;
int zero = 0;
int var_14 = 1273921598;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
