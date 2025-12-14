#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13137440197792875811ULL;
unsigned int var_1 = 3577528585U;
int var_3 = 927081749;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-16;
int zero = 0;
unsigned int var_11 = 2361879754U;
int var_12 = -244473853;
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
