#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17878;
unsigned short var_6 = (unsigned short)4765;
unsigned short var_7 = (unsigned short)32466;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)14610;
int zero = 0;
unsigned int var_10 = 3178675073U;
unsigned short var_11 = (unsigned short)2510;
long long int var_12 = -8945526674115824865LL;
unsigned int var_13 = 1018056343U;
unsigned int var_14 = 3389635261U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
