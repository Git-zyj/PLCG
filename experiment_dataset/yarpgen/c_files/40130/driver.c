#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4189054151343903860LL;
long long int var_1 = 5350301938365166032LL;
signed char var_4 = (signed char)114;
unsigned long long int var_5 = 13500214160071901464ULL;
long long int var_7 = 5857030305629932581LL;
long long int var_8 = 8754296164505852884LL;
unsigned char var_11 = (unsigned char)46;
unsigned long long int var_12 = 2173865299135268895ULL;
unsigned int var_13 = 3428274746U;
unsigned char var_14 = (unsigned char)75;
unsigned long long int var_15 = 6041283460533257743ULL;
unsigned long long int var_17 = 4359656299191061339ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)90;
unsigned int var_20 = 1126418851U;
void init() {
}

void checksum() {
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
