#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10061504520640601594ULL;
unsigned short var_2 = (unsigned short)40269;
unsigned int var_4 = 4200459353U;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = 1883669504088454239LL;
unsigned long long int var_12 = 52613964419934847ULL;
signed char var_13 = (signed char)70;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
