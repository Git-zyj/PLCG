#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)96;
short var_2 = (short)-18474;
unsigned long long int var_7 = 2398362104352434901ULL;
short var_9 = (short)-764;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
