#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 7301989486303930375ULL;
unsigned long long int var_17 = 8488003192522448917ULL;
int zero = 0;
int var_20 = -497485520;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 16083581672056248309ULL;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
