#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12098696884918255769ULL;
unsigned long long int var_8 = 18290818788337213650ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)7070;
unsigned long long int var_18 = 15665489580324165521ULL;
int zero = 0;
signed char var_20 = (signed char)-42;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
