#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)66;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
long long int var_5 = -8357653415423399903LL;
unsigned short var_10 = (unsigned short)4548;
int zero = 0;
unsigned long long int var_16 = 10090159963897738522ULL;
long long int var_17 = 2632481840198886663LL;
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
