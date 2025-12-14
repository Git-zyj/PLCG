#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)74;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-14449;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 13630595327925103996ULL;
unsigned short var_11 = (unsigned short)10055;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)63;
short var_15 = (short)12487;
unsigned char var_16 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
