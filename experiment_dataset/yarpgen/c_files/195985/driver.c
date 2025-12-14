#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2947692796U;
long long int var_3 = -617859222110053133LL;
signed char var_8 = (signed char)31;
short var_11 = (short)-13228;
int var_16 = 903540585;
int var_17 = -824566320;
int zero = 0;
signed char var_19 = (signed char)78;
int var_20 = 1139284041;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
