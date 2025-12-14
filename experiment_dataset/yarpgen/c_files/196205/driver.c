#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)51;
unsigned int var_1 = 401457981U;
_Bool var_2 = (_Bool)0;
long long int var_5 = -8313085828393933214LL;
unsigned int var_7 = 1949759185U;
long long int var_8 = -2622452986889078630LL;
long long int var_11 = 8516415139473267887LL;
long long int var_14 = 7025991155360131885LL;
int zero = 0;
long long int var_17 = -6718494991759549686LL;
unsigned int var_18 = 759572133U;
unsigned int var_19 = 3771254094U;
long long int var_20 = 2492545499686729916LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
