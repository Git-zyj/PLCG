#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)35987;
signed char var_9 = (signed char)-14;
unsigned int var_14 = 3516069227U;
unsigned char var_16 = (unsigned char)225;
unsigned int var_19 = 1980991788U;
int zero = 0;
long long int var_20 = -8963412137621560615LL;
long long int var_21 = -2596236429370382924LL;
unsigned long long int var_22 = 13382681280225171224ULL;
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
