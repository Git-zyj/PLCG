#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)22;
int var_3 = 1480620568;
int var_5 = -194060465;
unsigned char var_8 = (unsigned char)99;
int zero = 0;
short var_11 = (short)-25696;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)69;
unsigned char var_14 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
