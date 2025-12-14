#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6236310805569859649LL;
unsigned char var_4 = (unsigned char)64;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)22;
unsigned long long int var_11 = 15420303543153482597ULL;
signed char var_12 = (signed char)86;
short var_13 = (short)25810;
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
