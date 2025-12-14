#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1553641916790793334LL;
unsigned short var_7 = (unsigned short)48175;
_Bool var_8 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 6989972199343266878LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
