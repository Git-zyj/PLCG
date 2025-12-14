#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3035566498U;
unsigned int var_3 = 1002601770U;
signed char var_4 = (signed char)11;
signed char var_5 = (signed char)43;
signed char var_10 = (signed char)31;
signed char var_13 = (signed char)16;
int zero = 0;
signed char var_14 = (signed char)77;
unsigned int var_15 = 2344678115U;
signed char var_16 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
