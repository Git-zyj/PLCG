#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19119;
short var_5 = (short)16046;
short var_6 = (short)-27388;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_12 = (short)-23996;
short var_13 = (short)-21932;
int var_14 = -1855046002;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
