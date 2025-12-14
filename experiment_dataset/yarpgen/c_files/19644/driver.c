#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2051514873U;
long long int var_3 = -5827490783080617414LL;
unsigned char var_12 = (unsigned char)142;
int zero = 0;
signed char var_13 = (signed char)30;
long long int var_14 = 2335630492104450698LL;
void init() {
}

void checksum() {
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
