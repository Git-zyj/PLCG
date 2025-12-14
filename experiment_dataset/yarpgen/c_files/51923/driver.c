#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 9214732566594826068LL;
long long int var_5 = -4601624989036796580LL;
unsigned int var_8 = 3591245969U;
int zero = 0;
unsigned short var_10 = (unsigned short)31774;
unsigned short var_11 = (unsigned short)54118;
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
