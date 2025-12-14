#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)54;
long long int var_5 = -4636237834933017511LL;
short var_9 = (short)1866;
short var_10 = (short)15872;
signed char var_13 = (signed char)122;
long long int var_14 = 8495257646207575956LL;
int zero = 0;
signed char var_15 = (signed char)96;
unsigned short var_16 = (unsigned short)7610;
unsigned short var_17 = (unsigned short)35788;
void init() {
}

void checksum() {
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
