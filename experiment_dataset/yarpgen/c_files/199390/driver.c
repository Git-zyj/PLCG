#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)79;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 416868856U;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3457935372U;
signed char var_11 = (signed char)46;
int zero = 0;
short var_20 = (short)24445;
long long int var_21 = -4789913211074123892LL;
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
