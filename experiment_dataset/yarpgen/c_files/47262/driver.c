#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2686522172312543096LL;
unsigned short var_1 = (unsigned short)12258;
short var_2 = (short)29955;
long long int var_3 = 8606639230999072804LL;
_Bool var_4 = (_Bool)0;
short var_6 = (short)-4708;
unsigned int var_12 = 1827417466U;
signed char var_13 = (signed char)-63;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)18046;
int zero = 0;
short var_20 = (short)-22617;
_Bool var_21 = (_Bool)0;
int var_22 = -304640200;
unsigned char var_23 = (unsigned char)7;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
