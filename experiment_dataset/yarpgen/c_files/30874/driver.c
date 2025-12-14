#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = -1939092915123574640LL;
signed char var_5 = (signed char)41;
unsigned int var_7 = 2655126821U;
signed char var_9 = (signed char)124;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-25653;
void init() {
}

void checksum() {
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
