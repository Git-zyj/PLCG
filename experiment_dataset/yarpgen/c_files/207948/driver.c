#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5945979528638317375ULL;
short var_1 = (short)-10681;
unsigned int var_5 = 3728780080U;
unsigned long long int var_6 = 6443010844950041799ULL;
int var_9 = 2099147970;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 2235738852U;
unsigned long long int var_15 = 7403296986923045343ULL;
void init() {
}

void checksum() {
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
