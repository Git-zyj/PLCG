#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
long long int var_7 = -137936451042384788LL;
unsigned short var_8 = (unsigned short)47257;
long long int var_9 = 3400787891455096351LL;
int zero = 0;
signed char var_10 = (signed char)94;
unsigned long long int var_11 = 2035913528433309712ULL;
int var_12 = -2136116400;
unsigned long long int var_13 = 16111161030542290934ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
