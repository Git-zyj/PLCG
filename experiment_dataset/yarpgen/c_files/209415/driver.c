#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)122;
unsigned int var_4 = 2499027451U;
long long int var_6 = 9089029531574126702LL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 400325314U;
signed char var_14 = (signed char)127;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 535144453U;
signed char var_18 = (signed char)12;
void init() {
}

void checksum() {
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
