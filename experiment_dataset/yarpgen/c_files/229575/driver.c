#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-86;
long long int var_3 = -974793679797288529LL;
unsigned short var_4 = (unsigned short)52989;
unsigned long long int var_8 = 7553335545017692512ULL;
unsigned short var_10 = (unsigned short)342;
signed char var_14 = (signed char)22;
int zero = 0;
int var_15 = 2112755511;
unsigned short var_16 = (unsigned short)777;
signed char var_17 = (signed char)-110;
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
