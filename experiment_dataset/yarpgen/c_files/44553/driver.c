#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)9;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)69;
short var_7 = (short)21141;
int var_8 = 166346406;
unsigned short var_11 = (unsigned short)20269;
unsigned long long int var_12 = 13216197232892602475ULL;
unsigned short var_13 = (unsigned short)18792;
int zero = 0;
unsigned long long int var_14 = 1783143433932220393ULL;
short var_15 = (short)-31277;
unsigned long long int var_16 = 10439846229641836077ULL;
unsigned int var_17 = 2432422365U;
unsigned int var_18 = 2757128970U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
