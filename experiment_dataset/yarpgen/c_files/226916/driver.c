#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 3418743631920615752ULL;
unsigned short var_7 = (unsigned short)8267;
unsigned short var_15 = (unsigned short)55216;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 7849820905980600258ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
