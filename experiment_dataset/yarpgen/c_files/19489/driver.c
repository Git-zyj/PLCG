#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1478266220;
short var_4 = (short)24810;
unsigned char var_6 = (unsigned char)248;
signed char var_15 = (signed char)55;
short var_17 = (short)5614;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 6722828493040348785ULL;
short var_21 = (short)13029;
short var_22 = (short)17545;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
