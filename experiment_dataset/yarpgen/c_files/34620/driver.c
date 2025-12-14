#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)89;
unsigned int var_5 = 3691129167U;
unsigned char var_7 = (unsigned char)243;
unsigned long long int var_8 = 16863469761596629484ULL;
unsigned int var_10 = 3390365931U;
unsigned char var_11 = (unsigned char)140;
int zero = 0;
unsigned char var_17 = (unsigned char)249;
unsigned short var_18 = (unsigned short)11076;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
