#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3459571930U;
unsigned int var_6 = 4002897044U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)204;
unsigned int var_15 = 2031276238U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
