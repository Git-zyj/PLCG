#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)16132;
short var_6 = (short)-28690;
int var_13 = 825640342;
int zero = 0;
short var_19 = (short)-27447;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
int var_22 = -92256485;
short var_23 = (short)15529;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
