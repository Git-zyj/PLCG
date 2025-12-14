#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48898;
short var_3 = (short)-31619;
long long int var_4 = -486530664693146594LL;
unsigned char var_6 = (unsigned char)240;
int var_7 = -1908580905;
unsigned char var_8 = (unsigned char)123;
signed char var_9 = (signed char)-106;
short var_10 = (short)-28509;
unsigned int var_14 = 3307919593U;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 749995183U;
int zero = 0;
unsigned int var_18 = 1943018631U;
unsigned short var_19 = (unsigned short)54775;
unsigned int var_20 = 2607850132U;
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
