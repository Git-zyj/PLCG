#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)44310;
unsigned int var_5 = 4168664596U;
signed char var_10 = (signed char)-87;
unsigned short var_14 = (unsigned short)45863;
signed char var_16 = (signed char)122;
int zero = 0;
signed char var_18 = (signed char)-35;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)60;
int var_21 = -582144030;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
