#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1721387831895769979ULL;
short var_4 = (short)14790;
unsigned short var_5 = (unsigned short)39066;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3377320820U;
int zero = 0;
signed char var_10 = (signed char)36;
unsigned long long int var_11 = 2486665174354762217ULL;
unsigned char var_12 = (unsigned char)207;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
