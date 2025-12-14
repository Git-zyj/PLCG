#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1709825280;
signed char var_4 = (signed char)102;
unsigned long long int var_8 = 7743295064337087346ULL;
short var_11 = (short)25114;
int zero = 0;
signed char var_17 = (signed char)-27;
int var_18 = 864781330;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
