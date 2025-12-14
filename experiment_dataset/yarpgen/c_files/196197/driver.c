#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2013380257U;
_Bool var_8 = (_Bool)0;
short var_9 = (short)14793;
unsigned int var_14 = 552170349U;
int zero = 0;
long long int var_18 = -5364187746150560265LL;
_Bool var_19 = (_Bool)1;
long long int var_20 = 943890306747501731LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
