#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 6731286590758693624LL;
unsigned int var_15 = 2886023656U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2121059020U;
long long int var_20 = -6993511682301588918LL;
unsigned int var_21 = 2424358660U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
