#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3072009499195560898ULL;
short var_2 = (short)-5194;
unsigned long long int var_5 = 7726012364104451921ULL;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
_Bool var_13 = (_Bool)0;
short var_16 = (short)-25355;
unsigned long long int var_17 = 1972937770445536831ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)44242;
unsigned char var_19 = (unsigned char)175;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
