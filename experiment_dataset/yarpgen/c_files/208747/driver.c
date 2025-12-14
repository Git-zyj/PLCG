#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1977873535;
short var_8 = (short)-22949;
long long int var_13 = 1217149912260571941LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 3707742449003657675ULL;
unsigned long long int var_20 = 12881461218141370801ULL;
void init() {
}

void checksum() {
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
