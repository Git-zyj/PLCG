#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14915634543094395572ULL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_5 = 18099641015481353201ULL;
_Bool var_6 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)197;
short var_17 = (short)26144;
unsigned long long int var_18 = 10999470626497831341ULL;
unsigned long long int var_19 = 4339159345607806200ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
