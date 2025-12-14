#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 16063692015088092447ULL;
signed char var_9 = (signed char)-51;
long long int var_10 = 5118514474742154402LL;
long long int var_12 = -7780402475903802431LL;
int zero = 0;
unsigned long long int var_13 = 12735772897889095396ULL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)13288;
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
