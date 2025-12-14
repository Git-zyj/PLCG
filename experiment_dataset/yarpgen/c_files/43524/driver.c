#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8773157236429747002LL;
unsigned long long int var_3 = 2021922632475702346ULL;
int var_4 = 317501365;
short var_6 = (short)25920;
unsigned short var_9 = (unsigned short)62616;
unsigned short var_11 = (unsigned short)39102;
unsigned long long int var_12 = 15775931299706379074ULL;
int var_13 = -815678456;
short var_14 = (short)-31111;
unsigned char var_16 = (unsigned char)122;
unsigned long long int var_17 = 12924931274542332656ULL;
unsigned int var_18 = 2144295415U;
int zero = 0;
unsigned char var_19 = (unsigned char)196;
short var_20 = (short)31737;
short var_21 = (short)-9812;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)17153;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
