#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2939754910U;
unsigned short var_5 = (unsigned short)31302;
_Bool var_6 = (_Bool)1;
long long int var_12 = 6698077507037025669LL;
unsigned short var_13 = (unsigned short)33754;
int var_14 = -39690297;
short var_15 = (short)802;
unsigned char var_17 = (unsigned char)204;
int zero = 0;
short var_20 = (short)24612;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-11895;
unsigned char var_23 = (unsigned char)146;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
