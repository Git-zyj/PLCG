#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4151235155443465446LL;
short var_3 = (short)-1335;
_Bool var_7 = (_Bool)1;
unsigned char var_13 = (unsigned char)7;
int zero = 0;
signed char var_15 = (signed char)-22;
unsigned int var_16 = 2708890857U;
unsigned char var_17 = (unsigned char)172;
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
