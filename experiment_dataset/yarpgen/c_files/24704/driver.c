#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16071242384297440912ULL;
unsigned char var_1 = (unsigned char)100;
long long int var_5 = 714695417794953495LL;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)45291;
short var_14 = (short)-15174;
unsigned short var_15 = (unsigned short)43018;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
