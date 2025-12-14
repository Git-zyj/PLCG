#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)11342;
unsigned short var_4 = (unsigned short)29359;
unsigned short var_5 = (unsigned short)14328;
unsigned int var_7 = 3819690727U;
signed char var_9 = (signed char)49;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -4151196628664599610LL;
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
