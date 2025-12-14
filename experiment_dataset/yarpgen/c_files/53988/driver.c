#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 2111575044U;
unsigned short var_14 = (unsigned short)37832;
unsigned short var_16 = (unsigned short)17990;
unsigned short var_17 = (unsigned short)41375;
int zero = 0;
unsigned char var_18 = (unsigned char)65;
long long int var_19 = -4521996861191229799LL;
long long int var_20 = -4417389526658140391LL;
short var_21 = (short)22859;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
