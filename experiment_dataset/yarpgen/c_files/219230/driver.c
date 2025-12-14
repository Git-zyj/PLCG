#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10511401653722540576ULL;
unsigned int var_7 = 2322407005U;
unsigned int var_9 = 3014397566U;
short var_12 = (short)-21972;
unsigned int var_15 = 1921250171U;
int zero = 0;
unsigned int var_19 = 1820254636U;
long long int var_20 = 2209171644888209469LL;
unsigned long long int var_21 = 37260025685400499ULL;
int var_22 = -1194680682;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
