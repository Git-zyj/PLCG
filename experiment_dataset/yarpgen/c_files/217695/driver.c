#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2379156747U;
unsigned short var_8 = (unsigned short)31494;
long long int var_10 = 1613817335439466036LL;
_Bool var_14 = (_Bool)0;
long long int var_17 = 202865917572437407LL;
int zero = 0;
unsigned char var_20 = (unsigned char)73;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
