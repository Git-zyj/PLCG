#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1975548010;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-81;
unsigned int var_15 = 1876439205U;
int zero = 0;
unsigned char var_17 = (unsigned char)53;
unsigned char var_18 = (unsigned char)192;
void init() {
}

void checksum() {
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
