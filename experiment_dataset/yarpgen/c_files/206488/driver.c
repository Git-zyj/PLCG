#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5055;
unsigned long long int var_6 = 8126282899060521423ULL;
short var_7 = (short)-20760;
unsigned int var_9 = 2002305556U;
short var_12 = (short)-28840;
long long int var_13 = 1760143088265152756LL;
int zero = 0;
unsigned int var_15 = 288850088U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
