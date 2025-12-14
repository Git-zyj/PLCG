#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 446455871316059248LL;
long long int var_1 = -5310327688782237117LL;
int zero = 0;
unsigned short var_18 = (unsigned short)4081;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)124;
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
