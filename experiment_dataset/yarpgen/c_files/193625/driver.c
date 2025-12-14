#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-88;
unsigned int var_8 = 1262542138U;
unsigned short var_17 = (unsigned short)38093;
unsigned int var_18 = 139873953U;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -2958730092278182836LL;
unsigned char var_21 = (unsigned char)74;
void init() {
}

void checksum() {
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
