#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)43;
unsigned int var_7 = 353677842U;
unsigned int var_8 = 823110508U;
long long int var_10 = 4672637531694301139LL;
int zero = 0;
int var_11 = -201767069;
short var_12 = (short)-5932;
signed char var_13 = (signed char)51;
void init() {
}

void checksum() {
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
