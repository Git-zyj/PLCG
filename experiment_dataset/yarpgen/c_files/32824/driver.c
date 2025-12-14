#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
_Bool var_1 = (_Bool)1;
unsigned int var_6 = 724133599U;
unsigned int var_11 = 3289414695U;
long long int var_12 = 4472094464385977336LL;
int zero = 0;
signed char var_16 = (signed char)72;
unsigned char var_17 = (unsigned char)255;
signed char var_18 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
