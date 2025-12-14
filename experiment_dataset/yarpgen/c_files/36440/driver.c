#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)52362;
_Bool var_6 = (_Bool)1;
unsigned char var_12 = (unsigned char)11;
long long int var_13 = 7199985525880474924LL;
unsigned short var_18 = (unsigned short)4352;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = -1614433219;
unsigned char var_21 = (unsigned char)87;
unsigned int var_22 = 356843075U;
long long int var_23 = -7661717452447549898LL;
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
