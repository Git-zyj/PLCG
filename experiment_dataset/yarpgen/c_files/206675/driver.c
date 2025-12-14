#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2791;
long long int var_1 = -8218643429555397992LL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)112;
long long int var_7 = -544790750007898337LL;
int zero = 0;
unsigned long long int var_11 = 12267923411470014146ULL;
unsigned long long int var_12 = 12306864754633217295ULL;
long long int var_13 = -8250637246793123246LL;
short var_14 = (short)-14512;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
