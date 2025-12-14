#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)11833;
unsigned short var_7 = (unsigned short)50681;
long long int var_8 = -4135052204522694951LL;
unsigned char var_11 = (unsigned char)193;
signed char var_12 = (signed char)79;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)56002;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)23;
unsigned short var_18 = (unsigned short)48272;
unsigned long long int var_19 = 14679017301884322249ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
