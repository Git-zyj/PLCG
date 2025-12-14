#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)95;
signed char var_1 = (signed char)116;
signed char var_3 = (signed char)83;
unsigned long long int var_4 = 2579258668882058691ULL;
signed char var_8 = (signed char)113;
unsigned char var_10 = (unsigned char)177;
unsigned long long int var_11 = 2168388541095510287ULL;
int zero = 0;
unsigned int var_12 = 188071831U;
unsigned long long int var_13 = 10534631784737033419ULL;
unsigned int var_14 = 2957120340U;
void init() {
}

void checksum() {
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
