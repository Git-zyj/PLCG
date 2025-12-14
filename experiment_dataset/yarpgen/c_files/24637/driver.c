#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 2084513388U;
unsigned long long int var_7 = 2447869577212573608ULL;
unsigned char var_8 = (unsigned char)205;
unsigned short var_9 = (unsigned short)11162;
signed char var_14 = (signed char)22;
int zero = 0;
long long int var_17 = 2835176260820217188LL;
long long int var_18 = 6980020036992643129LL;
int var_19 = -1748714648;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
