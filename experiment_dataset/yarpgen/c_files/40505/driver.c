#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4272472052U;
short var_4 = (short)-22454;
int var_5 = 1526291999;
unsigned long long int var_14 = 8724993841727439266ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 3781174482U;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)2;
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
