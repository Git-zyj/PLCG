#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 900249910U;
unsigned short var_2 = (unsigned short)16711;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3329143611U;
unsigned long long int var_5 = 2765093156912810091ULL;
_Bool var_6 = (_Bool)0;
long long int var_9 = -3482853359483625790LL;
short var_10 = (short)15648;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
