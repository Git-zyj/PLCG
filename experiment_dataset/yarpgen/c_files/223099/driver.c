#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2046745241482562295LL;
unsigned int var_8 = 927189532U;
unsigned char var_9 = (unsigned char)149;
int zero = 0;
short var_11 = (short)-12473;
long long int var_12 = -8419352087243102689LL;
unsigned long long int var_13 = 11950347116213698830ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
