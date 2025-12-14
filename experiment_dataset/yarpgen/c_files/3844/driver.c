#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)15437;
short var_6 = (short)24208;
long long int var_7 = -5442839122537144269LL;
unsigned short var_8 = (unsigned short)17681;
unsigned int var_12 = 581216031U;
int zero = 0;
short var_14 = (short)-13908;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)124;
void init() {
}

void checksum() {
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
