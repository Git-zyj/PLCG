#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2834427729U;
unsigned int var_1 = 3034045213U;
long long int var_2 = 5642987027284874472LL;
signed char var_18 = (signed char)57;
int zero = 0;
long long int var_20 = -8234040914100284835LL;
unsigned short var_21 = (unsigned short)48604;
long long int var_22 = 1014754774069800849LL;
_Bool var_23 = (_Bool)1;
int var_24 = -428553216;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
