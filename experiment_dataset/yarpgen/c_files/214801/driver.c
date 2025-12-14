#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -147720002;
unsigned long long int var_3 = 2617126946305521591ULL;
long long int var_6 = 6712377751572596179LL;
_Bool var_10 = (_Bool)0;
unsigned short var_14 = (unsigned short)34653;
int zero = 0;
signed char var_17 = (signed char)97;
unsigned long long int var_18 = 4447781732825811584ULL;
unsigned int var_19 = 3049043391U;
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
