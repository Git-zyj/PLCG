#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8134;
short var_13 = (short)24675;
_Bool var_14 = (_Bool)0;
int var_15 = -1550157727;
int var_17 = 803953425;
int zero = 0;
unsigned int var_18 = 929771550U;
unsigned int var_19 = 2569012360U;
void init() {
}

void checksum() {
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
