#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
int var_2 = -881499684;
unsigned int var_3 = 1783384447U;
long long int var_5 = -3074478293607301777LL;
unsigned short var_6 = (unsigned short)2524;
int zero = 0;
long long int var_13 = -4925689800223088652LL;
unsigned int var_14 = 3576448643U;
unsigned long long int var_15 = 6695001902670188132ULL;
long long int var_16 = 4268502138891462071LL;
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
