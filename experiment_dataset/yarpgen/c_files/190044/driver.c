#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)81;
signed char var_5 = (signed char)4;
unsigned int var_8 = 3270802380U;
unsigned short var_10 = (unsigned short)8850;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)5544;
unsigned int var_21 = 623782367U;
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
