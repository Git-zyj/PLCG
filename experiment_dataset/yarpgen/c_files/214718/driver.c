#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_3 = 5625124987058390762LL;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 2682751710U;
int var_11 = -779677195;
int zero = 0;
short var_14 = (short)-1370;
signed char var_15 = (signed char)62;
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
