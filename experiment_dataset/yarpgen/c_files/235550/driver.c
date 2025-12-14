#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5339009522746389339ULL;
short var_3 = (short)-13955;
long long int var_4 = -2162863819417024377LL;
long long int var_6 = -3315056541660791497LL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 10257556169477150136ULL;
long long int var_18 = 1206145235045333807LL;
int zero = 0;
short var_19 = (short)22698;
unsigned long long int var_20 = 2084887077226525628ULL;
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
