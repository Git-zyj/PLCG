#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 11141067U;
unsigned char var_6 = (unsigned char)64;
unsigned char var_8 = (unsigned char)43;
unsigned char var_11 = (unsigned char)220;
_Bool var_12 = (_Bool)1;
unsigned int var_16 = 2347288041U;
int zero = 0;
unsigned char var_17 = (unsigned char)141;
unsigned char var_18 = (unsigned char)104;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
