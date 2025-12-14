#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56944;
unsigned int var_10 = 464370320U;
unsigned char var_14 = (unsigned char)121;
int zero = 0;
unsigned long long int var_19 = 3543961847824262647ULL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 4224146238U;
unsigned int var_22 = 140924041U;
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
