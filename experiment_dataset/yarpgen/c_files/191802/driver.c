#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1776943405;
unsigned char var_2 = (unsigned char)8;
unsigned short var_3 = (unsigned short)51434;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
long long int var_8 = -6291672794749412948LL;
unsigned char var_9 = (unsigned char)30;
unsigned char var_10 = (unsigned char)58;
int zero = 0;
unsigned int var_12 = 1746672912U;
long long int var_13 = -7668939112616162776LL;
long long int var_14 = 1295253975780033101LL;
unsigned int var_15 = 3868426249U;
unsigned short var_16 = (unsigned short)42811;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
