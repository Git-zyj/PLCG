#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)97;
unsigned char var_2 = (unsigned char)230;
unsigned short var_3 = (unsigned short)27300;
unsigned long long int var_4 = 9433910474878836953ULL;
unsigned short var_6 = (unsigned short)16121;
int var_7 = 1433216347;
unsigned int var_8 = 4234767591U;
unsigned char var_9 = (unsigned char)68;
int zero = 0;
unsigned short var_11 = (unsigned short)8783;
unsigned int var_12 = 3540831191U;
unsigned short var_13 = (unsigned short)16656;
unsigned char var_14 = (unsigned char)150;
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
