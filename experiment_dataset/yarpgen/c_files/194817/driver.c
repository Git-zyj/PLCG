#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 623970391U;
unsigned short var_13 = (unsigned short)22151;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 4943508647189953419ULL;
signed char var_16 = (signed char)54;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 11796390792705235637ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
