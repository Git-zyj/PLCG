#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16019;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 4110630416U;
signed char var_8 = (signed char)113;
unsigned char var_14 = (unsigned char)229;
unsigned int var_16 = 2357604075U;
int zero = 0;
unsigned char var_17 = (unsigned char)56;
unsigned char var_18 = (unsigned char)108;
short var_19 = (short)17926;
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
