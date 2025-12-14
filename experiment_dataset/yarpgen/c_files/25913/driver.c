#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_6 = 5451236889694721682LL;
unsigned int var_7 = 3450075269U;
unsigned long long int var_8 = 5233055625440070241ULL;
long long int var_13 = -7314232498952178741LL;
int zero = 0;
unsigned int var_17 = 1032181776U;
long long int var_18 = -5298620425112801556LL;
void init() {
}

void checksum() {
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
