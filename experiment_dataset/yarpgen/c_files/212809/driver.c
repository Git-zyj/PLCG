#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)54;
unsigned int var_7 = 1696849882U;
_Bool var_9 = (_Bool)1;
long long int var_11 = -7583732782630441230LL;
int var_17 = 239048971;
int zero = 0;
unsigned char var_19 = (unsigned char)176;
int var_20 = 369448548;
unsigned int var_21 = 3078328792U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
