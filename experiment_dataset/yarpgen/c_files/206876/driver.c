#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 46324805333923179ULL;
int var_5 = 1742749897;
short var_6 = (short)28999;
int zero = 0;
signed char var_12 = (signed char)-93;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3531150299U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
