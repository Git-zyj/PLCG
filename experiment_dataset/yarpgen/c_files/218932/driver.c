#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_9 = (unsigned char)102;
long long int var_12 = 1464968006282853323LL;
short var_13 = (short)-21768;
signed char var_14 = (signed char)-115;
unsigned char var_16 = (unsigned char)63;
unsigned short var_17 = (unsigned short)7916;
int zero = 0;
unsigned int var_18 = 1744658337U;
int var_19 = 1620473609;
unsigned long long int var_20 = 4030636252223823135ULL;
int var_21 = -1637305062;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
