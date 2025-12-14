#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 662318582;
unsigned long long int var_2 = 9287436541543834717ULL;
unsigned int var_3 = 2619395513U;
long long int var_7 = 924701631055243551LL;
int var_9 = 980598438;
int zero = 0;
short var_10 = (short)24848;
unsigned int var_11 = 378574779U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
