#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5149961588073458706LL;
int var_6 = 1957487403;
long long int var_7 = 4534848198504961740LL;
unsigned int var_12 = 1603157722U;
int zero = 0;
long long int var_16 = -9201071970477626068LL;
unsigned char var_17 = (unsigned char)224;
void init() {
}

void checksum() {
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
