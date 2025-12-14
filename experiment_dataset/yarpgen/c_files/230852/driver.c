#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 772886694U;
signed char var_1 = (signed char)36;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)51548;
long long int var_4 = -2052155520173342017LL;
signed char var_6 = (signed char)-63;
unsigned long long int var_8 = 4771384738591063054ULL;
long long int var_9 = -1640973226903641864LL;
unsigned long long int var_10 = 5272515754693471934ULL;
unsigned short var_12 = (unsigned short)19448;
int zero = 0;
unsigned long long int var_13 = 15352860468787540554ULL;
signed char var_14 = (signed char)18;
unsigned short var_15 = (unsigned short)42534;
signed char var_16 = (signed char)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
