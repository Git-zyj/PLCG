#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1150517320U;
signed char var_6 = (signed char)-123;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 710001160U;
unsigned long long int var_12 = 6278876400242658132ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
