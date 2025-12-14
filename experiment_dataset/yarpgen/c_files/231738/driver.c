#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_8 = (unsigned short)54888;
int zero = 0;
unsigned short var_10 = (unsigned short)6560;
unsigned long long int var_11 = 3418968202478362825ULL;
unsigned int var_12 = 936006589U;
unsigned int var_13 = 1935757269U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
