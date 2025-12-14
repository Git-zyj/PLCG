#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 737041086;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 3722212425U;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_13 = 1884653357;
unsigned int var_14 = 2237376174U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
