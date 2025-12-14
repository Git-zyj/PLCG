#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14023660629143047939ULL;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)60136;
unsigned short var_13 = (unsigned short)59536;
unsigned char var_16 = (unsigned char)248;
unsigned int var_18 = 3578407090U;
int zero = 0;
unsigned char var_19 = (unsigned char)153;
unsigned long long int var_20 = 3775313953458855253ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
