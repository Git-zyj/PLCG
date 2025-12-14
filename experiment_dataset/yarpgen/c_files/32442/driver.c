#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3264171160164166071ULL;
unsigned int var_1 = 3472524118U;
unsigned char var_6 = (unsigned char)117;
unsigned long long int var_10 = 2663193261084962966ULL;
int zero = 0;
signed char var_14 = (signed char)1;
unsigned int var_15 = 612826116U;
unsigned short var_16 = (unsigned short)21146;
void init() {
}

void checksum() {
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
