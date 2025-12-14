#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 12680180U;
_Bool var_4 = (_Bool)0;
short var_7 = (short)14742;
unsigned long long int var_8 = 16507044136989480602ULL;
unsigned int var_9 = 2502120524U;
long long int var_10 = 8551308476780566495LL;
unsigned int var_12 = 1807201338U;
unsigned long long int var_14 = 13421955237808909364ULL;
unsigned long long int var_15 = 11325930196921148010ULL;
long long int var_16 = 2470468747229150602LL;
long long int var_19 = -7378510260861839676LL;
int zero = 0;
unsigned long long int var_20 = 9699328929839617371ULL;
short var_21 = (short)-5057;
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
