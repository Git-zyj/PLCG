#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)101;
short var_10 = (short)28765;
signed char var_13 = (signed char)-27;
long long int var_15 = -3661719794859072407LL;
int zero = 0;
short var_17 = (short)-7771;
short var_18 = (short)-6342;
unsigned int var_19 = 2875294918U;
int var_20 = 601960140;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
