#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-2;
signed char var_2 = (signed char)96;
signed char var_6 = (signed char)38;
unsigned int var_7 = 2160084965U;
unsigned int var_10 = 857759627U;
unsigned int var_13 = 1290018246U;
int var_14 = 1635232028;
unsigned short var_17 = (unsigned short)59590;
int zero = 0;
unsigned int var_20 = 2787261352U;
int var_21 = 608622822;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 2277250997U;
void init() {
}

void checksum() {
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
