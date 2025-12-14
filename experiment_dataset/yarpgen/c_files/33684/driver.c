#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18302092059633799373ULL;
long long int var_2 = -1287714437584564084LL;
signed char var_5 = (signed char)-112;
unsigned int var_6 = 1010660454U;
long long int var_10 = -3046466825373764441LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)59984;
unsigned int var_16 = 255089431U;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)199;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
