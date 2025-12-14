#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)-103;
long long int var_13 = -8918224554960658105LL;
int zero = 0;
unsigned long long int var_14 = 13768582903495075311ULL;
unsigned int var_15 = 2055617981U;
unsigned int var_16 = 2906399315U;
unsigned short var_17 = (unsigned short)53177;
void init() {
}

void checksum() {
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
