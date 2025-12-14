#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)30;
int var_4 = -1460332152;
unsigned char var_6 = (unsigned char)172;
unsigned long long int var_7 = 17788563288852712595ULL;
unsigned short var_10 = (unsigned short)29705;
unsigned long long int var_11 = 13539350752082750006ULL;
unsigned long long int var_13 = 13104685131749844399ULL;
unsigned long long int var_14 = 16249867984142369347ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)51274;
unsigned int var_16 = 1683457152U;
long long int var_17 = 588421525356633208LL;
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
