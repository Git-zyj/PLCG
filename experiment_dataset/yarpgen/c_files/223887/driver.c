#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-73;
signed char var_5 = (signed char)33;
int var_8 = 1662122583;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned int var_16 = 1987955180U;
unsigned short var_18 = (unsigned short)18437;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-18;
unsigned short var_21 = (unsigned short)15379;
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
