#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3136;
_Bool var_1 = (_Bool)0;
unsigned long long int var_4 = 12868221988942236495ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_12 = (unsigned short)451;
unsigned int var_15 = 3451801785U;
int zero = 0;
short var_19 = (short)-27999;
unsigned char var_20 = (unsigned char)47;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3479900406U;
long long int var_23 = 4957106470982829088LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
