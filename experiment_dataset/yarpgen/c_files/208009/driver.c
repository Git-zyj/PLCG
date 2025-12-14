#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 245970081325209345LL;
_Bool var_7 = (_Bool)1;
int zero = 0;
long long int var_20 = -8213308259242622490LL;
unsigned int var_21 = 986693852U;
long long int var_22 = 2586847141705363882LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
