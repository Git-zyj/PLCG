#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3783452903U;
unsigned int var_10 = 3912733819U;
unsigned int var_11 = 1386818752U;
signed char var_12 = (signed char)-103;
unsigned int var_14 = 3881148537U;
unsigned int var_16 = 3830818069U;
int zero = 0;
unsigned int var_17 = 1687826993U;
unsigned int var_18 = 3675283164U;
long long int var_19 = -7957204683648207956LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
