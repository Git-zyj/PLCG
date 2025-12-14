#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 725640462U;
long long int var_1 = -5199602734951756849LL;
signed char var_6 = (signed char)67;
short var_9 = (short)-25837;
int var_10 = 1738953027;
int var_11 = -242126290;
short var_13 = (short)-731;
int zero = 0;
int var_14 = 1480010170;
signed char var_15 = (signed char)-37;
int var_16 = 338545115;
short var_17 = (short)14761;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
