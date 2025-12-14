#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-49;
unsigned int var_4 = 2513067994U;
short var_5 = (short)12952;
unsigned int var_7 = 1788752149U;
unsigned char var_9 = (unsigned char)29;
int var_11 = 1556617638;
unsigned int var_13 = 3419381740U;
unsigned int var_14 = 801307145U;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2907327827U;
unsigned short var_18 = (unsigned short)19170;
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
