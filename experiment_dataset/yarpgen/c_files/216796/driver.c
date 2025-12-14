#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16102;
short var_6 = (short)-6011;
unsigned char var_9 = (unsigned char)234;
int var_13 = -1463092782;
_Bool var_16 = (_Bool)1;
signed char var_18 = (signed char)47;
int zero = 0;
unsigned char var_20 = (unsigned char)181;
short var_21 = (short)16798;
unsigned short var_22 = (unsigned short)21625;
long long int var_23 = 7422219505701537026LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
