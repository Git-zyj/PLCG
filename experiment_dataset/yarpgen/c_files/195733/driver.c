#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)88;
unsigned long long int var_10 = 4955664167372998662ULL;
int var_14 = 320902944;
int zero = 0;
signed char var_20 = (signed char)77;
unsigned short var_21 = (unsigned short)55057;
unsigned short var_22 = (unsigned short)57754;
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
