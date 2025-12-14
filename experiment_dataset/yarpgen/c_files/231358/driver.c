#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-86;
long long int var_6 = 2483376795116877697LL;
signed char var_8 = (signed char)84;
unsigned char var_15 = (unsigned char)210;
int zero = 0;
long long int var_18 = 6058896602599471620LL;
_Bool var_19 = (_Bool)0;
long long int var_20 = 75919466398026074LL;
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
