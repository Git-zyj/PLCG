#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -7520647216274428056LL;
long long int var_13 = 5593979556581252054LL;
long long int var_15 = 1633175764599796156LL;
int zero = 0;
long long int var_16 = -5495674393960076782LL;
long long int var_17 = -2869414885554076484LL;
long long int var_18 = 1040365699218519857LL;
long long int var_19 = 124043955005303522LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
