#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-51;
signed char var_4 = (signed char)111;
_Bool var_6 = (_Bool)1;
unsigned int var_10 = 846127003U;
int zero = 0;
long long int var_19 = 233840420572016451LL;
int var_20 = -79690615;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
