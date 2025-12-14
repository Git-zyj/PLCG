#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47376;
int var_5 = 99284499;
signed char var_6 = (signed char)79;
unsigned long long int var_16 = 11297676082717101531ULL;
short var_17 = (short)3581;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_20 = 745452675;
_Bool var_21 = (_Bool)0;
int var_22 = 869889777;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
