#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_7 = -15832693316379003LL;
long long int var_8 = 4955847373580188058LL;
signed char var_10 = (signed char)-74;
short var_12 = (short)-6452;
int zero = 0;
signed char var_13 = (signed char)78;
short var_14 = (short)-6183;
unsigned int var_15 = 1679309682U;
long long int var_16 = 2853250186978196147LL;
long long int var_17 = 5676035483042139519LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
