#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)99;
unsigned long long int var_2 = 17447641490776000461ULL;
signed char var_5 = (signed char)-77;
int zero = 0;
unsigned long long int var_16 = 3395772889333674860ULL;
signed char var_17 = (signed char)-44;
void init() {
}

void checksum() {
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
