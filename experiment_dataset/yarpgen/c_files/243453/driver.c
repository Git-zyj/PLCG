#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
int var_7 = -1901953889;
unsigned long long int var_12 = 6630771586546335985ULL;
int zero = 0;
signed char var_13 = (signed char)-93;
unsigned long long int var_14 = 11061350324016617636ULL;
short var_15 = (short)-3894;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
