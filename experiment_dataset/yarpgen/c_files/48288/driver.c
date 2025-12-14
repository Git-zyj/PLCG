#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6527989871513276087LL;
unsigned short var_7 = (unsigned short)26365;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 18135325479096474854ULL;
unsigned short var_15 = (unsigned short)59778;
int zero = 0;
short var_16 = (short)32445;
int var_17 = 902907548;
void init() {
}

void checksum() {
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
