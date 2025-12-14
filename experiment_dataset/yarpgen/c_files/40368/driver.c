#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)23;
unsigned int var_2 = 104048407U;
unsigned long long int var_3 = 6428902206495227453ULL;
short var_4 = (short)-7259;
signed char var_7 = (signed char)37;
_Bool var_9 = (_Bool)0;
unsigned int var_12 = 4070170003U;
unsigned int var_15 = 2663959200U;
int zero = 0;
unsigned char var_16 = (unsigned char)17;
unsigned long long int var_17 = 4606038150090686955ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
