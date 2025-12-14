#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-68;
unsigned char var_10 = (unsigned char)148;
signed char var_11 = (signed char)-92;
unsigned int var_13 = 4160283508U;
int zero = 0;
signed char var_19 = (signed char)58;
unsigned int var_20 = 2469687011U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
