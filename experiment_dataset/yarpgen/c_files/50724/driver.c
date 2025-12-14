#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)101;
int var_2 = -1870097590;
unsigned char var_3 = (unsigned char)171;
unsigned char var_4 = (unsigned char)69;
unsigned char var_5 = (unsigned char)120;
short var_6 = (short)-20870;
unsigned long long int var_7 = 8594390686069863619ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)35;
int zero = 0;
unsigned short var_11 = (unsigned short)25954;
signed char var_12 = (signed char)63;
int var_13 = -505154460;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1219675267U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
