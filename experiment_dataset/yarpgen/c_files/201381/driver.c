#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
unsigned long long int var_3 = 916550335503691365ULL;
unsigned char var_5 = (unsigned char)146;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 2796009463321101879ULL;
int zero = 0;
short var_19 = (short)6826;
unsigned long long int var_20 = 9535500303148458251ULL;
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
