#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1844562734684313635ULL;
long long int var_8 = -7108277232168518275LL;
unsigned int var_12 = 488589373U;
unsigned long long int var_13 = 3894012617368815041ULL;
unsigned long long int var_15 = 9535938452757678493ULL;
unsigned long long int var_16 = 1755942555797521870ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)39093;
unsigned short var_21 = (unsigned short)23598;
_Bool var_22 = (_Bool)0;
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
