#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned int var_18 = 2300910868U;
int zero = 0;
unsigned long long int var_19 = 13539347117658626960ULL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
long long int var_22 = -3382147439186002759LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
