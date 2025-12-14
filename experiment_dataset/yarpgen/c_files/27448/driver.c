#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 7307538347188849967ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 14715995623399486778ULL;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 17825626389479938218ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
