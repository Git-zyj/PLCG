#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1646;
_Bool var_6 = (_Bool)0;
long long int var_9 = -4847290506647015320LL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 12992837403476033019ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2524357142U;
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
