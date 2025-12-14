#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8476989309513023772LL;
unsigned short var_2 = (unsigned short)38908;
unsigned long long int var_4 = 16456203994206101856ULL;
short var_13 = (short)-17556;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 484348788U;
short var_17 = (short)28741;
short var_18 = (short)22923;
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
