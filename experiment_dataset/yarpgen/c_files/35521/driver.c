#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6385;
unsigned short var_1 = (unsigned short)14959;
signed char var_4 = (signed char)-2;
unsigned short var_5 = (unsigned short)23608;
long long int var_8 = -2972662134296000065LL;
long long int var_10 = -7410652946255578379LL;
short var_12 = (short)-7805;
unsigned short var_14 = (unsigned short)28845;
int zero = 0;
short var_17 = (short)27567;
unsigned long long int var_18 = 2500059942763382468ULL;
void init() {
}

void checksum() {
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
