#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)128;
unsigned int var_4 = 861041442U;
signed char var_6 = (signed char)-119;
unsigned long long int var_7 = 1125141797936587014ULL;
int zero = 0;
long long int var_13 = 7857621821295403173LL;
signed char var_14 = (signed char)42;
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
