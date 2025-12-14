#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1132151231U;
unsigned int var_10 = 1249273192U;
short var_11 = (short)-12829;
int zero = 0;
unsigned short var_18 = (unsigned short)63926;
short var_19 = (short)26122;
unsigned short var_20 = (unsigned short)40872;
void init() {
}

void checksum() {
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
