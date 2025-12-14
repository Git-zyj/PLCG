#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_9 = -7450493211723610560LL;
unsigned char var_12 = (unsigned char)216;
unsigned int var_13 = 3019423797U;
unsigned char var_14 = (unsigned char)146;
int zero = 0;
signed char var_15 = (signed char)77;
_Bool var_16 = (_Bool)0;
int var_17 = 1996872430;
_Bool var_18 = (_Bool)1;
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
