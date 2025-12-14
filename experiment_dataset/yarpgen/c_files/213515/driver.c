#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45170;
unsigned short var_10 = (unsigned short)15762;
int var_11 = -1371916216;
unsigned short var_14 = (unsigned short)60577;
long long int var_16 = -9004284729376633890LL;
int zero = 0;
unsigned short var_17 = (unsigned short)38194;
int var_18 = -807884809;
unsigned int var_19 = 471164954U;
int var_20 = -288843772;
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
