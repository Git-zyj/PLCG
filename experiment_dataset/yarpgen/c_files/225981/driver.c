#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1886988346;
_Bool var_2 = (_Bool)1;
short var_4 = (short)13573;
unsigned long long int var_6 = 2433404576994665642ULL;
short var_11 = (short)27440;
int var_12 = 740426712;
short var_13 = (short)26530;
long long int var_15 = 5802477906477126017LL;
unsigned char var_17 = (unsigned char)96;
long long int var_19 = -6347029842472674836LL;
int zero = 0;
short var_20 = (short)-24332;
short var_21 = (short)-14707;
long long int var_22 = -5203806044371851181LL;
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
