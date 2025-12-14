#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-14;
unsigned long long int var_8 = 16688158184168849648ULL;
signed char var_14 = (signed char)97;
signed char var_16 = (signed char)124;
short var_17 = (short)23794;
int zero = 0;
unsigned int var_18 = 3223627776U;
signed char var_19 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
