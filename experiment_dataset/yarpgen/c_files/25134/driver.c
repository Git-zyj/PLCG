#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19201;
int var_2 = 1055612580;
unsigned short var_3 = (unsigned short)31690;
long long int var_7 = 5168457553663868423LL;
unsigned int var_8 = 2039290039U;
_Bool var_10 = (_Bool)1;
long long int var_13 = -6428834474394753990LL;
int zero = 0;
long long int var_14 = 2250608949997224656LL;
int var_15 = 114666495;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
