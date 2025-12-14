#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17554773124136080100ULL;
unsigned long long int var_4 = 17068443503580093552ULL;
unsigned short var_5 = (unsigned short)46533;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3195692186U;
int zero = 0;
unsigned short var_16 = (unsigned short)65124;
unsigned int var_17 = 872436492U;
unsigned long long int var_18 = 2819977625687230088ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
