#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9242;
int var_5 = 1986007767;
long long int var_7 = 2159512698466723270LL;
unsigned short var_9 = (unsigned short)28664;
unsigned long long int var_10 = 13767147798395348928ULL;
int zero = 0;
int var_13 = 1304385296;
unsigned short var_14 = (unsigned short)29384;
_Bool var_15 = (_Bool)0;
long long int var_16 = -7920647571404712611LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
