#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)53;
long long int var_4 = 488987951157780231LL;
long long int var_5 = 3408384895317947924LL;
long long int var_6 = 817369216697499468LL;
unsigned int var_7 = 2814693559U;
short var_10 = (short)18036;
long long int var_11 = 6157885265378304430LL;
int zero = 0;
unsigned long long int var_15 = 16435165021245082213ULL;
unsigned char var_16 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
