#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_4 = (short)28558;
unsigned char var_6 = (unsigned char)98;
long long int var_7 = 2762700978186311154LL;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-23088;
unsigned short var_12 = (unsigned short)35730;
int zero = 0;
unsigned short var_14 = (unsigned short)22247;
int var_15 = 1103295290;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
