#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3437348208U;
long long int var_5 = -5976067872919167256LL;
short var_8 = (short)-17394;
int zero = 0;
short var_10 = (short)32340;
long long int var_11 = -8922266794245817273LL;
unsigned short var_12 = (unsigned short)46499;
unsigned long long int var_13 = 18342881771818560302ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
