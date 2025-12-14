#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13212;
_Bool var_3 = (_Bool)0;
short var_4 = (short)10608;
unsigned char var_7 = (unsigned char)147;
int zero = 0;
unsigned char var_10 = (unsigned char)155;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 13544527452665468210ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
