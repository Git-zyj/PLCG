#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1077158676;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 15152838495078003292ULL;
unsigned short var_5 = (unsigned short)28034;
signed char var_6 = (signed char)-64;
unsigned char var_9 = (unsigned char)141;
int var_11 = 89350581;
unsigned long long int var_12 = 4953185403152837541ULL;
unsigned char var_14 = (unsigned char)83;
int zero = 0;
unsigned int var_15 = 1883661960U;
unsigned short var_16 = (unsigned short)14184;
unsigned short var_17 = (unsigned short)37512;
void init() {
}

void checksum() {
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
