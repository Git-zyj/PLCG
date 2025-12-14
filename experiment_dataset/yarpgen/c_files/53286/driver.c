#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned char var_6 = (unsigned char)8;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned long long int var_12 = 721293103909075532ULL;
unsigned char var_16 = (unsigned char)116;
int zero = 0;
unsigned char var_18 = (unsigned char)65;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
