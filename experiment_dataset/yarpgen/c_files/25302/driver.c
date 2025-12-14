#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13169097669464882976ULL;
unsigned long long int var_10 = 18386733937001601398ULL;
int zero = 0;
unsigned long long int var_11 = 3714947839279757838ULL;
unsigned short var_12 = (unsigned short)55736;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
