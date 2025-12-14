#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8901636607734355877LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 9719221665892377961ULL;
short var_20 = (short)16437;
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
