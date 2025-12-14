#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
unsigned long long int var_6 = 1446783708080062136ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)64343;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)92;
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
