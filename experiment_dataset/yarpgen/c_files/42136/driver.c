#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2059906633;
int var_3 = -429003847;
long long int var_8 = 4136865373872499200LL;
unsigned long long int var_10 = 2937087869800361204ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)57737;
short var_12 = (short)11215;
long long int var_13 = -6804039948661900947LL;
void init() {
}

void checksum() {
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
