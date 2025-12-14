#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1481283472U;
unsigned long long int var_2 = 4339046223390234454ULL;
long long int var_3 = 2356672913328679765LL;
unsigned short var_5 = (unsigned short)22627;
short var_6 = (short)-13095;
short var_9 = (short)-28627;
int var_10 = 1221657723;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)205;
unsigned short var_19 = (unsigned short)16657;
unsigned short var_20 = (unsigned short)25380;
long long int var_21 = 4627482305459474759LL;
unsigned char var_22 = (unsigned char)49;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
