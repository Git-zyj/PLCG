#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1484684344U;
int var_3 = 1283691480;
unsigned int var_4 = 160236482U;
int var_7 = -1775784257;
long long int var_8 = -2870642043009450431LL;
int zero = 0;
long long int var_11 = 8272264807033997560LL;
unsigned int var_12 = 2920455085U;
int var_13 = -115580300;
int var_14 = -1988055715;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
