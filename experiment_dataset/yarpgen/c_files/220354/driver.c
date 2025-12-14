#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7688715948943260673LL;
unsigned char var_1 = (unsigned char)128;
int var_2 = -173968032;
short var_6 = (short)-3922;
short var_7 = (short)-21245;
long long int var_8 = 478473473128169394LL;
int var_10 = 923739894;
long long int var_11 = 6488556503877339351LL;
unsigned long long int var_12 = 17555354687321496903ULL;
int zero = 0;
unsigned long long int var_14 = 8887011883644069749ULL;
int var_15 = -1382023007;
short var_16 = (short)29726;
unsigned long long int var_17 = 2486698029501688641ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
