#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3616768425U;
unsigned int var_11 = 1985497102U;
long long int var_12 = 7468895371994829968LL;
int zero = 0;
long long int var_15 = 1940314129497248016LL;
signed char var_16 = (signed char)-23;
unsigned long long int var_17 = 10573757332137403015ULL;
unsigned long long int var_18 = 17724053160420923705ULL;
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
