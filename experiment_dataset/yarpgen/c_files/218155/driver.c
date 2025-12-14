#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)38179;
signed char var_7 = (signed char)-87;
long long int var_13 = -1604576196477807789LL;
long long int var_18 = 301323713274235891LL;
int zero = 0;
unsigned short var_19 = (unsigned short)18812;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1355562608U;
long long int var_22 = 5784027985858193523LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
