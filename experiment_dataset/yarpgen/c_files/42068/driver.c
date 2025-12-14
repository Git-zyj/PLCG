#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64711;
long long int var_2 = 5371326251002137848LL;
unsigned short var_4 = (unsigned short)52039;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 768529804U;
unsigned long long int var_12 = 3711761839428435234ULL;
long long int var_13 = 7757104256648616186LL;
long long int var_14 = -8011665859997136693LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)63998;
void init() {
}

void checksum() {
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
