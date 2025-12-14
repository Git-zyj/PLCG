#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
_Bool var_2 = (_Bool)1;
long long int var_6 = -66258217140003778LL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)105;
long long int var_13 = 2111954157784442843LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_20 = 730470827;
int var_21 = -1121315354;
unsigned int var_22 = 1777811630U;
int var_23 = 1250653971;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
