#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7478142603184540728LL;
unsigned int var_2 = 1629362359U;
unsigned int var_3 = 780160492U;
long long int var_8 = 2276983511670694556LL;
long long int var_9 = -3454377105081451626LL;
int zero = 0;
long long int var_11 = -1193507694054216702LL;
unsigned int var_12 = 479750219U;
long long int var_13 = -5158837902569424729LL;
unsigned int var_14 = 3234255526U;
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
