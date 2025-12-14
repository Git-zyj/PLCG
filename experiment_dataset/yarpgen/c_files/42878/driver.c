#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -8853429590355679273LL;
long long int var_9 = -3638631589712217467LL;
long long int var_10 = 1614591498692142400LL;
long long int var_11 = -5360241252437290040LL;
unsigned char var_12 = (unsigned char)205;
long long int var_13 = -5490317187548761301LL;
unsigned long long int var_15 = 18097241122793595667ULL;
int var_16 = -1944801306;
unsigned long long int var_17 = 11903738063161508658ULL;
int zero = 0;
unsigned long long int var_18 = 8939358464886325973ULL;
unsigned char var_19 = (unsigned char)17;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
