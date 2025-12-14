#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)84;
signed char var_8 = (signed char)83;
unsigned short var_12 = (unsigned short)51975;
unsigned short var_13 = (unsigned short)56094;
unsigned int var_16 = 333956779U;
int zero = 0;
unsigned short var_18 = (unsigned short)9884;
_Bool var_19 = (_Bool)1;
long long int var_20 = 6596928762561982792LL;
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
