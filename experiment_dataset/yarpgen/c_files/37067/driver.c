#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-95;
int var_5 = -860532147;
short var_6 = (short)-20344;
_Bool var_8 = (_Bool)0;
short var_9 = (short)14513;
unsigned short var_10 = (unsigned short)34857;
int zero = 0;
unsigned long long int var_12 = 16266814127054950895ULL;
int var_13 = 648483680;
unsigned short var_14 = (unsigned short)2102;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
