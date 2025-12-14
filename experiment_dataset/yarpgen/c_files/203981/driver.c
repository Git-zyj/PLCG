#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7796115175201138008LL;
int var_1 = -376695495;
long long int var_2 = -3968237046147676213LL;
long long int var_3 = 779806243231255975LL;
signed char var_4 = (signed char)36;
unsigned int var_5 = 139242935U;
unsigned char var_6 = (unsigned char)93;
long long int var_7 = 2990142227691860167LL;
int var_9 = 1397019309;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-30;
unsigned short var_15 = (unsigned short)16862;
unsigned char var_16 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
