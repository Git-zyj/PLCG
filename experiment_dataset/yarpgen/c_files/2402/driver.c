#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8080567451205089100LL;
_Bool var_2 = (_Bool)0;
long long int var_9 = 3917213165215781788LL;
int var_12 = 610364032;
unsigned char var_13 = (unsigned char)38;
unsigned char var_14 = (unsigned char)81;
int zero = 0;
unsigned int var_16 = 2178716078U;
signed char var_17 = (signed char)-26;
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
