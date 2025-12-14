#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5814179237925020560LL;
int var_1 = -1906095360;
int var_2 = -1620929172;
signed char var_5 = (signed char)112;
long long int var_10 = -4328013078793760020LL;
int zero = 0;
signed char var_15 = (signed char)-112;
int var_16 = -1481743406;
long long int var_17 = -4223689832159399900LL;
unsigned char var_18 = (unsigned char)22;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
