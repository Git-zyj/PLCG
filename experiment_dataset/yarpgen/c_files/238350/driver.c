#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12711;
int var_1 = 349224201;
unsigned char var_3 = (unsigned char)22;
unsigned int var_5 = 1770469461U;
long long int var_6 = 224389255999849794LL;
unsigned long long int var_7 = 14811502026863980742ULL;
unsigned long long int var_8 = 1818171735241489947ULL;
unsigned int var_9 = 953550525U;
unsigned short var_11 = (unsigned short)41732;
unsigned short var_13 = (unsigned short)33920;
int zero = 0;
short var_15 = (short)10014;
long long int var_16 = 5489370131779596624LL;
signed char var_17 = (signed char)-110;
signed char var_18 = (signed char)-13;
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
