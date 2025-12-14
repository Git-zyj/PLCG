#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8517;
long long int var_7 = -6067392941952957714LL;
long long int var_9 = -2101472129169288986LL;
unsigned int var_10 = 1539699513U;
unsigned short var_16 = (unsigned short)33260;
int zero = 0;
short var_18 = (short)6135;
long long int var_19 = 1725041525850859638LL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-65;
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
