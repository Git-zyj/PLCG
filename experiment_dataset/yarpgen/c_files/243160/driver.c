#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)14730;
signed char var_11 = (signed char)31;
_Bool var_12 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_20 = 5902758217501618961LL;
unsigned int var_21 = 3193630142U;
void init() {
}

void checksum() {
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
