#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9272062034563022196ULL;
int var_4 = 1187496287;
unsigned long long int var_7 = 17886599281591039828ULL;
long long int var_13 = -2278578242146146262LL;
int zero = 0;
unsigned long long int var_15 = 10677692800670760260ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 18363125146947220545ULL;
int var_18 = -1266003005;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
