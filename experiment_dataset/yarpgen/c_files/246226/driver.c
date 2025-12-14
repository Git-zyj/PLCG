#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 316847349U;
long long int var_1 = -8473076079865239530LL;
int zero = 0;
unsigned long long int var_14 = 3632911335192077000ULL;
signed char var_15 = (signed char)-53;
long long int var_16 = -6814709803994353277LL;
unsigned char var_17 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
