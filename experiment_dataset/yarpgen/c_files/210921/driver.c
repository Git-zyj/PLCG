#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4506667855290813823LL;
short var_12 = (short)-25497;
unsigned char var_16 = (unsigned char)89;
int zero = 0;
unsigned int var_20 = 3377056480U;
unsigned short var_21 = (unsigned short)55922;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
