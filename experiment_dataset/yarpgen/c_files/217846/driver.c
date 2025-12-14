#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1157474379U;
unsigned long long int var_3 = 12817719124887628330ULL;
int var_6 = -1826259441;
int zero = 0;
unsigned long long int var_13 = 5947490883720750948ULL;
unsigned long long int var_14 = 4231027737395089485ULL;
unsigned int var_15 = 1402435537U;
short var_16 = (short)-31692;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
