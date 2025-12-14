#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1023901614U;
unsigned int var_2 = 1132244504U;
unsigned int var_7 = 2175983558U;
long long int var_10 = -1348959370322303225LL;
_Bool var_12 = (_Bool)0;
signed char var_15 = (signed char)-42;
int var_16 = 1181088453;
unsigned int var_17 = 503001085U;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)31;
signed char var_20 = (signed char)116;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
