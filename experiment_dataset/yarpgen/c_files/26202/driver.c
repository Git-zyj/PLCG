#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)93;
unsigned int var_4 = 768338838U;
unsigned long long int var_5 = 11985910663993540663ULL;
_Bool var_6 = (_Bool)0;
int var_10 = -1294334343;
unsigned char var_13 = (unsigned char)225;
unsigned char var_17 = (unsigned char)231;
int zero = 0;
short var_19 = (short)-17036;
int var_20 = -1337602399;
int var_21 = -1406107683;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
