#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14295;
short var_2 = (short)3072;
unsigned long long int var_3 = 14805547906965616050ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_10 = 7380978237921115788ULL;
int var_12 = -1054276469;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 1849985701U;
unsigned long long int var_16 = 9599450426591962907ULL;
short var_17 = (short)-18573;
short var_18 = (short)2689;
long long int var_19 = -9135014112287292628LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
