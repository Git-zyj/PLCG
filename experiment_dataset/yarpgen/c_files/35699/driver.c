#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-88;
unsigned short var_6 = (unsigned short)56249;
unsigned int var_7 = 3695527733U;
unsigned int var_8 = 2207471014U;
int zero = 0;
unsigned short var_20 = (unsigned short)40252;
unsigned short var_21 = (unsigned short)11907;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
