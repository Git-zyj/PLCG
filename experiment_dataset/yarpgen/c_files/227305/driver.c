#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 13943480749035956662ULL;
long long int var_13 = 3100008824297826249LL;
unsigned long long int var_16 = 13687525581087373364ULL;
unsigned long long int var_17 = 13511673371958775372ULL;
int zero = 0;
signed char var_20 = (signed char)15;
int var_21 = 1967365567;
unsigned char var_22 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
