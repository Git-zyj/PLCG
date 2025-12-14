#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5932158343739373787LL;
int var_6 = 2073875519;
unsigned int var_13 = 2263862244U;
int zero = 0;
unsigned char var_18 = (unsigned char)252;
unsigned long long int var_19 = 11366208775510953523ULL;
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
