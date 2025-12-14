#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-46;
unsigned short var_8 = (unsigned short)25158;
int zero = 0;
short var_18 = (short)1487;
long long int var_19 = -7841001595497203179LL;
unsigned int var_20 = 2484692121U;
short var_21 = (short)-22831;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
