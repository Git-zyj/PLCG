#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -1584892803;
unsigned long long int var_3 = 5054451022161143757ULL;
unsigned short var_4 = (unsigned short)15828;
unsigned char var_5 = (unsigned char)229;
unsigned int var_6 = 2480744881U;
unsigned char var_8 = (unsigned char)172;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)85;
long long int var_13 = 2124034425386028969LL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)220;
int zero = 0;
unsigned short var_16 = (unsigned short)27125;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)42066;
unsigned char var_19 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
