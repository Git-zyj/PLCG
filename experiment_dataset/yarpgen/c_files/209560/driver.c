#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12753408628872660659ULL;
unsigned int var_2 = 1797831151U;
int var_5 = 2077883639;
unsigned int var_17 = 1697662154U;
int zero = 0;
unsigned char var_19 = (unsigned char)255;
unsigned long long int var_20 = 9354196335711502952ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
