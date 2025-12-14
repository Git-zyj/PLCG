#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2950411809U;
unsigned int var_2 = 735761132U;
unsigned short var_3 = (unsigned short)44910;
unsigned char var_5 = (unsigned char)70;
long long int var_11 = -807463264266862739LL;
int zero = 0;
unsigned long long int var_14 = 11411679660202340378ULL;
signed char var_15 = (signed char)-23;
unsigned char var_16 = (unsigned char)191;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
