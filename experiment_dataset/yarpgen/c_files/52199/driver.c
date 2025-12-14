#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2037;
short var_5 = (short)-944;
long long int var_8 = -2728951291434509123LL;
unsigned short var_11 = (unsigned short)46622;
int zero = 0;
long long int var_12 = 1335109646793072677LL;
short var_13 = (short)5374;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
