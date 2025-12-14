#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1976280273;
unsigned long long int var_8 = 17729311715266031901ULL;
int zero = 0;
unsigned int var_13 = 413481811U;
signed char var_14 = (signed char)-115;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-18;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
