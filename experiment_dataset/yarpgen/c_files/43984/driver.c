#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 17620511416671015756ULL;
signed char var_2 = (signed char)-66;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)79;
int zero = 0;
unsigned int var_10 = 1625402103U;
unsigned short var_11 = (unsigned short)11281;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
