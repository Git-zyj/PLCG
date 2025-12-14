#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1886357676;
unsigned char var_1 = (unsigned char)11;
unsigned int var_3 = 2673577587U;
signed char var_4 = (signed char)-120;
signed char var_5 = (signed char)-120;
unsigned char var_6 = (unsigned char)105;
unsigned long long int var_7 = 14336714384001665376ULL;
signed char var_9 = (signed char)9;
unsigned int var_10 = 325064857U;
signed char var_11 = (signed char)-7;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-23998;
unsigned char var_15 = (unsigned char)102;
unsigned long long int var_16 = 8459988285234641268ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
