#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
signed char var_8 = (signed char)-44;
unsigned long long int var_11 = 1272064997003283619ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)34495;
unsigned short var_15 = (unsigned short)21632;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3227038963U;
unsigned short var_18 = (unsigned short)54651;
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
