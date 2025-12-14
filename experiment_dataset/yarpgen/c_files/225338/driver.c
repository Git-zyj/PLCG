#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18342220997131864068ULL;
signed char var_1 = (signed char)90;
unsigned short var_2 = (unsigned short)14894;
long long int var_5 = 3614264169455428695LL;
int var_7 = -1884634873;
unsigned char var_10 = (unsigned char)64;
unsigned long long int var_12 = 17658658423376303499ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)53342;
unsigned int var_14 = 1276866855U;
int var_15 = -1111341000;
long long int var_16 = 5949576651944262880LL;
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
