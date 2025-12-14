#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1839843763;
unsigned char var_5 = (unsigned char)137;
unsigned char var_11 = (unsigned char)105;
int zero = 0;
long long int var_16 = -8901505055023665917LL;
long long int var_17 = -4773740728777666647LL;
int var_18 = -1071569679;
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
