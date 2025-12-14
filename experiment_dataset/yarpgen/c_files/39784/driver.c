#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2328594207U;
unsigned char var_4 = (unsigned char)183;
unsigned long long int var_5 = 444469171465600915ULL;
unsigned short var_6 = (unsigned short)6805;
unsigned char var_8 = (unsigned char)79;
unsigned char var_11 = (unsigned char)36;
int zero = 0;
unsigned int var_12 = 4230551313U;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 10866737793998173288ULL;
short var_15 = (short)2842;
unsigned char var_16 = (unsigned char)80;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
