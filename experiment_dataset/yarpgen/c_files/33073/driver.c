#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)15;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)150;
long long int var_9 = 6253802564634739798LL;
_Bool var_11 = (_Bool)0;
signed char var_15 = (signed char)42;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_19 = 5078410102527062237LL;
signed char var_20 = (signed char)88;
void init() {
}

void checksum() {
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
