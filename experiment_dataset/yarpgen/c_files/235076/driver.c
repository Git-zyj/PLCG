#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_4 = 2820947965U;
unsigned long long int var_10 = 15656831344848027823ULL;
unsigned short var_12 = (unsigned short)1916;
unsigned long long int var_13 = 15513285187521082140ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)9217;
unsigned long long int var_21 = 14491893444381149467ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
