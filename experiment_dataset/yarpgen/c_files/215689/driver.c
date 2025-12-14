#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2008696243806446732LL;
unsigned char var_2 = (unsigned char)174;
unsigned int var_5 = 3973116185U;
long long int var_8 = 2048750890729961408LL;
signed char var_10 = (signed char)-49;
int zero = 0;
signed char var_12 = (signed char)72;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-93;
unsigned short var_15 = (unsigned short)40412;
signed char var_16 = (signed char)-23;
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
