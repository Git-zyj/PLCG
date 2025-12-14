#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-15;
unsigned short var_8 = (unsigned short)6209;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)87;
signed char var_16 = (signed char)80;
unsigned int var_17 = 2935669216U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
