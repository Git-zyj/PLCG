#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
unsigned int var_6 = 4168595069U;
unsigned int var_10 = 3710904504U;
int zero = 0;
signed char var_11 = (signed char)108;
unsigned int var_12 = 2940762540U;
unsigned int var_13 = 3706754477U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
