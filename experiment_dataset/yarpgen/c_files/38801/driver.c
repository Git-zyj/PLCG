#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-52;
unsigned char var_4 = (unsigned char)158;
int var_5 = -1977779474;
unsigned long long int var_8 = 10955152950317422934ULL;
int zero = 0;
signed char var_12 = (signed char)18;
signed char var_13 = (signed char)24;
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
