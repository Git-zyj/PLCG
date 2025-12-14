#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-14;
signed char var_7 = (signed char)27;
unsigned int var_9 = 1587471961U;
signed char var_11 = (signed char)114;
signed char var_13 = (signed char)127;
int zero = 0;
unsigned long long int var_14 = 7980426730832297554ULL;
unsigned int var_15 = 3651233808U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
