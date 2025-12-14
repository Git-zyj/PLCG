#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30959;
unsigned char var_2 = (unsigned char)45;
int var_3 = -1916819130;
unsigned int var_5 = 1568931305U;
signed char var_10 = (signed char)-125;
int zero = 0;
unsigned int var_11 = 3910849459U;
_Bool var_12 = (_Bool)0;
int var_13 = -1921924203;
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
