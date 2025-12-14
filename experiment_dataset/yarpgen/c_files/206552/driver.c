#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)58819;
unsigned long long int var_9 = 10979395448795697584ULL;
short var_11 = (short)-7707;
_Bool var_12 = (_Bool)1;
unsigned char var_15 = (unsigned char)158;
int zero = 0;
unsigned char var_18 = (unsigned char)243;
unsigned char var_19 = (unsigned char)85;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
