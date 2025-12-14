#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1782709785;
unsigned int var_3 = 1761731612U;
unsigned char var_4 = (unsigned char)112;
long long int var_5 = 3145122960342521564LL;
unsigned long long int var_10 = 6247027937074755179ULL;
unsigned char var_13 = (unsigned char)185;
int zero = 0;
short var_14 = (short)29865;
unsigned int var_15 = 2538449178U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
