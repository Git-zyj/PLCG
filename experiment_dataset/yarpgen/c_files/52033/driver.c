#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52931;
unsigned char var_4 = (unsigned char)25;
int var_6 = -1811198620;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 2137377537615175777ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 3229756960U;
unsigned int var_18 = 984976097U;
short var_19 = (short)8062;
unsigned int var_20 = 1348325837U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
