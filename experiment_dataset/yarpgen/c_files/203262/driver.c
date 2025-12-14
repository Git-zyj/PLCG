#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)179;
unsigned short var_4 = (unsigned short)10963;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)112;
int var_10 = -394196230;
unsigned long long int var_12 = 12552190256658698105ULL;
long long int var_13 = -2748628948584203129LL;
int zero = 0;
int var_14 = 26512412;
unsigned char var_15 = (unsigned char)23;
unsigned char var_16 = (unsigned char)196;
short var_17 = (short)659;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
