#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)59;
short var_10 = (short)-25823;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 2741444048619115093ULL;
long long int var_21 = -5407550358118971135LL;
short var_22 = (short)-7355;
unsigned int var_23 = 1229591326U;
signed char var_24 = (signed char)119;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
