#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11485170326695813762ULL;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)95;
signed char var_9 = (signed char)83;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 5296883393030898971ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)1054;
unsigned char var_13 = (unsigned char)87;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
