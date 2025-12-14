#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5091154354992611275ULL;
unsigned int var_2 = 2311325139U;
unsigned int var_3 = 4180560577U;
short var_4 = (short)-17955;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-7313;
_Bool var_8 = (_Bool)0;
unsigned long long int var_13 = 18278703093329931098ULL;
short var_19 = (short)-32359;
int zero = 0;
unsigned char var_20 = (unsigned char)38;
int var_21 = 1787161392;
void init() {
}

void checksum() {
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
