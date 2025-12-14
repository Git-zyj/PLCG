#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7186501757119145939ULL;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)45641;
int zero = 0;
short var_13 = (short)-480;
long long int var_14 = 1705849014810896017LL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-117;
void init() {
}

void checksum() {
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
