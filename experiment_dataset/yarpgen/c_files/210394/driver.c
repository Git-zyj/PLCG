#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)123;
unsigned short var_5 = (unsigned short)3383;
unsigned int var_6 = 1908220054U;
short var_7 = (short)5145;
int var_8 = -915207024;
long long int var_9 = -6549471814593996442LL;
short var_11 = (short)25687;
unsigned int var_12 = 3200024922U;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 13257321171339185782ULL;
unsigned int var_16 = 3019165754U;
long long int var_17 = -3064855833059447152LL;
long long int var_18 = -6463072394956378355LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
