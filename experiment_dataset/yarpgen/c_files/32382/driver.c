#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21029;
long long int var_3 = 689917432114025083LL;
unsigned short var_6 = (unsigned short)17206;
long long int var_10 = -1418955409023966408LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 1779766194;
int var_17 = -21579618;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
