#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-9892;
short var_5 = (short)575;
unsigned char var_7 = (unsigned char)57;
unsigned long long int var_8 = 16823331597508005917ULL;
unsigned char var_10 = (unsigned char)169;
int zero = 0;
unsigned int var_12 = 1912794994U;
short var_13 = (short)7698;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)19;
unsigned long long int var_16 = 9745549445167405312ULL;
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
