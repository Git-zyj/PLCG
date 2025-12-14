#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1705459827U;
short var_4 = (short)-26742;
short var_6 = (short)12555;
short var_7 = (short)-9454;
unsigned short var_8 = (unsigned short)10265;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-30;
unsigned long long int var_12 = 5479319614408190311ULL;
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
