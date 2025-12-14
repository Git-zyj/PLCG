#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 612483409U;
short var_10 = (short)11514;
unsigned long long int var_13 = 14719262499038061393ULL;
unsigned short var_14 = (unsigned short)61272;
long long int var_15 = 594157137756830817LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)31829;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 4103030787U;
signed char var_20 = (signed char)40;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
