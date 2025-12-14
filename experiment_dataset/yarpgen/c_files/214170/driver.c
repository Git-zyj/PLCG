#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 764150892U;
int var_3 = 1147567277;
signed char var_4 = (signed char)-47;
unsigned char var_6 = (unsigned char)102;
long long int var_10 = 608732288633830543LL;
int zero = 0;
int var_15 = 751655591;
unsigned int var_16 = 1890260595U;
unsigned int var_17 = 680770055U;
signed char var_18 = (signed char)89;
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
