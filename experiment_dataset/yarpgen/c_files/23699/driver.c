#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21446;
long long int var_3 = -5499973644916628039LL;
short var_4 = (short)11153;
_Bool var_8 = (_Bool)0;
long long int var_9 = 327111102094218174LL;
signed char var_10 = (signed char)15;
signed char var_12 = (signed char)44;
int zero = 0;
unsigned char var_19 = (unsigned char)3;
unsigned long long int var_20 = 3047949273066813200ULL;
unsigned char var_21 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
