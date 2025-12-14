#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4376760702530909991LL;
long long int var_6 = 5762483056632154217LL;
unsigned char var_8 = (unsigned char)113;
int var_9 = 995944662;
short var_10 = (short)-18837;
int zero = 0;
unsigned long long int var_11 = 54916875640090639ULL;
unsigned long long int var_12 = 15349956326829331943ULL;
short var_13 = (short)-7463;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
