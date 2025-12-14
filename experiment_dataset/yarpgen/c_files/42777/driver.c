#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
long long int var_1 = 5818852281448305381LL;
unsigned long long int var_2 = 17632398861086665333ULL;
short var_4 = (short)-25169;
unsigned long long int var_9 = 6897322932582469953ULL;
short var_11 = (short)3795;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 873926310U;
short var_17 = (short)-30241;
void init() {
}

void checksum() {
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
