#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44676;
unsigned long long int var_6 = 9032324191634920084ULL;
unsigned char var_7 = (unsigned char)253;
unsigned long long int var_14 = 14153780247484653900ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_19 = 890518796;
signed char var_20 = (signed char)-45;
unsigned long long int var_21 = 6700495924629088909ULL;
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
