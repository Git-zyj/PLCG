#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_7 = (signed char)81;
unsigned char var_14 = (unsigned char)9;
signed char var_17 = (signed char)50;
unsigned long long int var_18 = 9724240708304401707ULL;
int zero = 0;
unsigned int var_19 = 1117420563U;
unsigned long long int var_20 = 2338388566958469857ULL;
unsigned char var_21 = (unsigned char)186;
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
