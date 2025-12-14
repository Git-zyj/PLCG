#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1137076329;
unsigned int var_1 = 3460913094U;
signed char var_2 = (signed char)16;
long long int var_8 = 6603529449510915235LL;
long long int var_10 = -47912550972020828LL;
int zero = 0;
long long int var_12 = -6565864882981159258LL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
