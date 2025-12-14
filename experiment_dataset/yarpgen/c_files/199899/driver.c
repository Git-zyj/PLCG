#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_6 = 77133587;
int var_8 = -1148211152;
unsigned long long int var_9 = 11494015261171191017ULL;
int var_10 = -450885590;
int zero = 0;
signed char var_12 = (signed char)22;
unsigned int var_13 = 2125594695U;
unsigned long long int var_14 = 11153838421241050221ULL;
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
