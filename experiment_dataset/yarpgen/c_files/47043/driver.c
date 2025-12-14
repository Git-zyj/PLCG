#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)8868;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 9520945570565868051ULL;
short var_18 = (short)22237;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 12542271457205147568ULL;
long long int var_22 = -1829031526423464612LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
