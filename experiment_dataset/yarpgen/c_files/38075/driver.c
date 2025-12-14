#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)48;
_Bool var_5 = (_Bool)1;
signed char var_10 = (signed char)52;
int zero = 0;
unsigned int var_12 = 3637230874U;
unsigned long long int var_13 = 4214219226039364544ULL;
unsigned int var_14 = 1349984408U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
