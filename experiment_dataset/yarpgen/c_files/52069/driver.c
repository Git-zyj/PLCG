#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11631303088229107061ULL;
unsigned int var_5 = 1121142763U;
unsigned int var_7 = 2978791913U;
int zero = 0;
long long int var_13 = 5533131504665788153LL;
short var_14 = (short)-26004;
void init() {
}

void checksum() {
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
