#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)13;
_Bool var_3 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 2058095616U;
short var_11 = (short)22496;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
