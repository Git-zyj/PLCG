#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)52;
_Bool var_3 = (_Bool)1;
long long int var_7 = 224817645236666629LL;
unsigned char var_9 = (unsigned char)2;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 680688337U;
int var_14 = 1704319978;
int var_15 = 421515899;
unsigned int var_16 = 1618388964U;
long long int var_17 = -5200688239035733882LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
