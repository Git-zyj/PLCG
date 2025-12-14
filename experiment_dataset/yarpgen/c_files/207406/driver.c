#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6021297480694288755ULL;
unsigned short var_2 = (unsigned short)13792;
unsigned char var_4 = (unsigned char)203;
unsigned long long int var_5 = 13086910986325361050ULL;
unsigned short var_6 = (unsigned short)12740;
long long int var_7 = 7322795254670321651LL;
int var_8 = 159606120;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 653485134U;
long long int var_14 = -7917013217590533654LL;
unsigned short var_15 = (unsigned short)27944;
int zero = 0;
signed char var_17 = (signed char)90;
unsigned int var_18 = 1092380721U;
long long int var_19 = -5620722512542042847LL;
int var_20 = 577762806;
void init() {
}

void checksum() {
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
