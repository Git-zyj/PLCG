#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-14;
long long int var_6 = 338837294866722460LL;
long long int var_7 = 2881479831534402953LL;
short var_10 = (short)-32755;
unsigned int var_12 = 3782993121U;
int zero = 0;
unsigned char var_13 = (unsigned char)7;
long long int var_14 = -1532165802315016625LL;
int var_15 = 71385676;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
