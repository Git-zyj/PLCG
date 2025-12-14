#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_6 = 795111702;
unsigned char var_8 = (unsigned char)229;
long long int var_9 = 5108803326477524861LL;
unsigned char var_13 = (unsigned char)191;
signed char var_14 = (signed char)-116;
int zero = 0;
short var_16 = (short)-12435;
unsigned int var_17 = 37872269U;
unsigned char var_18 = (unsigned char)167;
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
