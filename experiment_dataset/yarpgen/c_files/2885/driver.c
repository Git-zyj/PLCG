#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3973013390088575106ULL;
int var_9 = -330452019;
long long int var_13 = -3293879566255588331LL;
signed char var_14 = (signed char)54;
int var_17 = -819259431;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)31;
void init() {
}

void checksum() {
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
