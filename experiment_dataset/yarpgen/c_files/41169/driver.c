#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11741856948010249573ULL;
unsigned short var_8 = (unsigned short)41675;
unsigned char var_9 = (unsigned char)229;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)29083;
long long int var_13 = 4826627664454603044LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1321670695U;
signed char var_17 = (signed char)94;
void init() {
}

void checksum() {
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
