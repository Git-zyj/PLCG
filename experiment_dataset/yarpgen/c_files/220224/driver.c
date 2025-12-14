#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)42729;
unsigned short var_6 = (unsigned short)51091;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)10126;
int zero = 0;
short var_19 = (short)-17951;
int var_20 = -779311635;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
