#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18394;
int var_14 = 750829664;
int zero = 0;
int var_18 = -1052855058;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 18286649194460408758ULL;
int var_22 = -1966428278;
long long int var_23 = 8216624299750312535LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
