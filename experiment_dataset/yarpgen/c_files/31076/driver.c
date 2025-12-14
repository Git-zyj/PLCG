#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 150383023989169336ULL;
signed char var_3 = (signed char)70;
long long int var_10 = -9061380283431240072LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_16 = -431561707;
long long int var_17 = -3532221452234105412LL;
int var_18 = -486011930;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
