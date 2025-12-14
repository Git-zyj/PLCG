#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3102900831U;
long long int var_4 = 6104953625459576495LL;
signed char var_7 = (signed char)101;
signed char var_10 = (signed char)49;
int var_12 = -2078847714;
int zero = 0;
unsigned long long int var_13 = 9599888137173762361ULL;
signed char var_14 = (signed char)-101;
unsigned char var_15 = (unsigned char)147;
long long int var_16 = 3697649582007117925LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
