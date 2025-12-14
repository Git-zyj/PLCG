#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2480272772U;
signed char var_6 = (signed char)69;
unsigned long long int var_8 = 9521398924523919153ULL;
long long int var_10 = 4571155360518158291LL;
int zero = 0;
short var_16 = (short)-16192;
unsigned long long int var_17 = 10287952133617404172ULL;
unsigned long long int var_18 = 14456263114214254961ULL;
void init() {
}

void checksum() {
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
