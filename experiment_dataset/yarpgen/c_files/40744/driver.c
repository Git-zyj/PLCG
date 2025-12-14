#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1054322073695022739LL;
unsigned long long int var_1 = 4921683791334212856ULL;
unsigned long long int var_4 = 3008759171516272952ULL;
unsigned int var_6 = 2254556211U;
unsigned char var_8 = (unsigned char)78;
long long int var_11 = 8906033819382954397LL;
int zero = 0;
long long int var_14 = 8387671844128685904LL;
int var_15 = -512470740;
_Bool var_16 = (_Bool)1;
long long int var_17 = 647341834203836554LL;
long long int var_18 = -1007882890611636015LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
