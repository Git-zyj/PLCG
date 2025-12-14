#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 173263804;
unsigned int var_7 = 1079437768U;
signed char var_12 = (signed char)68;
unsigned int var_13 = 388760865U;
int var_15 = -960531643;
unsigned long long int var_17 = 13509357397660316103ULL;
int zero = 0;
unsigned long long int var_20 = 15920711484772552445ULL;
_Bool var_21 = (_Bool)0;
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
