#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3497390582U;
unsigned long long int var_4 = 275787508485338262ULL;
unsigned char var_8 = (unsigned char)156;
int var_9 = -2125074500;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -46118101;
int var_12 = 1671789505;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
