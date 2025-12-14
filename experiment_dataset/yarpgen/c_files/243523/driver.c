#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)90;
_Bool var_9 = (_Bool)1;
signed char var_15 = (signed char)-46;
int zero = 0;
unsigned int var_16 = 2093751177U;
signed char var_17 = (signed char)-82;
unsigned short var_18 = (unsigned short)6239;
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
