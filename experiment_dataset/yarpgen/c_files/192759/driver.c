#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4264670653552325685LL;
_Bool var_2 = (_Bool)0;
long long int var_4 = 2141963194312167754LL;
unsigned long long int var_9 = 13869864353923591382ULL;
unsigned long long int var_10 = 5430462250951358779ULL;
unsigned short var_13 = (unsigned short)3731;
int zero = 0;
long long int var_15 = -1869928164855701676LL;
unsigned char var_16 = (unsigned char)238;
_Bool var_17 = (_Bool)1;
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
