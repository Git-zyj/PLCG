#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 223581243U;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 101587559U;
long long int var_3 = -5382540015909788753LL;
unsigned int var_4 = 2047898416U;
long long int var_11 = -4182910988899882615LL;
int zero = 0;
unsigned int var_15 = 7674816U;
short var_16 = (short)-14440;
unsigned char var_17 = (unsigned char)13;
long long int var_18 = 4209713402426105206LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
