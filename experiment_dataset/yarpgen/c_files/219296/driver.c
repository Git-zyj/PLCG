#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11680599480896634496ULL;
short var_6 = (short)26677;
short var_7 = (short)8203;
short var_17 = (short)11043;
int zero = 0;
short var_18 = (short)18000;
short var_19 = (short)-32192;
int var_20 = -829974365;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
