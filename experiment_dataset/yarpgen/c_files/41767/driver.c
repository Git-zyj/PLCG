#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3047680049U;
signed char var_1 = (signed char)52;
_Bool var_3 = (_Bool)0;
unsigned long long int var_8 = 15985531141845912211ULL;
unsigned short var_9 = (unsigned short)19378;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)85;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
