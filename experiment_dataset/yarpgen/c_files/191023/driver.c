#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_4 = (signed char)-113;
unsigned short var_5 = (unsigned short)2836;
unsigned short var_6 = (unsigned short)15710;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)3;
unsigned short var_9 = (unsigned short)13354;
int zero = 0;
unsigned int var_14 = 1277808113U;
int var_15 = -1009738551;
int var_16 = 1088852565;
int var_17 = -1617952061;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
