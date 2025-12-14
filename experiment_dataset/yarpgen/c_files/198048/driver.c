#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-25;
signed char var_1 = (signed char)-75;
signed char var_3 = (signed char)-100;
short var_11 = (short)28312;
int zero = 0;
int var_12 = -1718343777;
short var_13 = (short)5430;
int var_14 = 1242108405;
int var_15 = -2057677517;
short var_16 = (short)31627;
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
