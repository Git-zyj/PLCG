#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2078037106;
long long int var_2 = -2159177528366265965LL;
unsigned int var_6 = 1282508346U;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)83;
int zero = 0;
long long int var_12 = -8364405470641445698LL;
unsigned int var_13 = 3662600350U;
short var_14 = (short)-14854;
_Bool var_15 = (_Bool)1;
short var_16 = (short)9804;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
