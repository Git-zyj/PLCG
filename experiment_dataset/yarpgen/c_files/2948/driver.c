#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_12 = (signed char)100;
_Bool var_13 = (_Bool)0;
long long int var_15 = -8613973926780329415LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 236530169U;
_Bool var_19 = (_Bool)0;
int var_20 = -1474111581;
unsigned char var_21 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
