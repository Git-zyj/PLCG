#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 523833208U;
unsigned long long int var_11 = 16313877014368723501ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)117;
unsigned int var_15 = 1941984388U;
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
