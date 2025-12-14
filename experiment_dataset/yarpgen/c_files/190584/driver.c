#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5929292878266389172LL;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-14017;
long long int var_12 = 7168187539801995164LL;
unsigned long long int var_16 = 12599920489854356004ULL;
long long int var_19 = 5444045160273635560LL;
int zero = 0;
unsigned long long int var_20 = 9653792635108708868ULL;
short var_21 = (short)-21313;
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
