#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3272297849U;
int var_7 = 1823455814;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)155;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 16133211317964294567ULL;
void init() {
}

void checksum() {
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
