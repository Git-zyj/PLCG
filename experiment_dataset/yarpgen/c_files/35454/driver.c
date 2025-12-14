#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)100;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)93;
short var_10 = (short)25105;
unsigned char var_11 = (unsigned char)203;
unsigned char var_13 = (unsigned char)32;
int zero = 0;
unsigned int var_15 = 226690952U;
short var_16 = (short)-30979;
unsigned char var_17 = (unsigned char)204;
long long int var_18 = 7559526407089203364LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
