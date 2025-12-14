#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32119;
short var_5 = (short)11459;
short var_8 = (short)26515;
long long int var_10 = -4916109630892247523LL;
signed char var_12 = (signed char)111;
_Bool var_14 = (_Bool)0;
signed char var_17 = (signed char)123;
signed char var_18 = (signed char)35;
int zero = 0;
unsigned long long int var_19 = 15857278693853989972ULL;
short var_20 = (short)16485;
unsigned short var_21 = (unsigned short)49035;
short var_22 = (short)-17236;
signed char var_23 = (signed char)35;
void init() {
}

void checksum() {
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
