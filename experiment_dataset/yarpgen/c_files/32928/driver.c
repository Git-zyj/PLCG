#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9601675265066331576ULL;
unsigned short var_4 = (unsigned short)10712;
unsigned char var_6 = (unsigned char)131;
signed char var_8 = (signed char)-82;
short var_10 = (short)-27169;
int zero = 0;
unsigned int var_11 = 3793488295U;
short var_12 = (short)68;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)104;
signed char var_15 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
