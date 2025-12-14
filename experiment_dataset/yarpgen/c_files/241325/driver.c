#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8116166287865717014LL;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)31;
int zero = 0;
unsigned char var_16 = (unsigned char)108;
long long int var_17 = -5298637774832195611LL;
short var_18 = (short)-17940;
void init() {
}

void checksum() {
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
