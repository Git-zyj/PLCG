#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -150469039611251864LL;
signed char var_2 = (signed char)83;
unsigned int var_3 = 3601570567U;
signed char var_4 = (signed char)13;
unsigned short var_6 = (unsigned short)23928;
unsigned int var_7 = 756852470U;
unsigned char var_8 = (unsigned char)47;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 1967003143729524982ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)95;
unsigned long long int var_14 = 6308273332684311354ULL;
signed char var_15 = (signed char)13;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)62968;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
