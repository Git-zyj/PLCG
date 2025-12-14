#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2770874204665148322LL;
long long int var_1 = 123851355546347326LL;
unsigned int var_2 = 2903168922U;
unsigned int var_6 = 1663812169U;
_Bool var_10 = (_Bool)0;
long long int var_11 = 6028195084722136129LL;
unsigned char var_12 = (unsigned char)111;
signed char var_13 = (signed char)28;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 1416016115U;
unsigned char var_21 = (unsigned char)0;
short var_22 = (short)-10025;
unsigned short var_23 = (unsigned short)19117;
signed char var_24 = (signed char)-51;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
