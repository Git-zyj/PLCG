#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 11027173467256775372ULL;
unsigned int var_14 = 2327782391U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 10620398300830325801ULL;
unsigned short var_20 = (unsigned short)62705;
unsigned long long int var_21 = 10528924604487138744ULL;
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
