#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = -6654335074209070310LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)83;
long long int var_17 = 8794553309108883469LL;
unsigned long long int var_18 = 8353519414228761692ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
