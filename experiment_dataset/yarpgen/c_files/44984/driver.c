#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_12 = (unsigned char)215;
unsigned long long int var_14 = 2625961069260293337ULL;
unsigned int var_18 = 2862058701U;
int zero = 0;
long long int var_20 = -5070678206159673812LL;
unsigned short var_21 = (unsigned short)32165;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
