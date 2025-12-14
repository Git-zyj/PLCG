#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)29808;
short var_6 = (short)9499;
short var_7 = (short)-30911;
unsigned long long int var_8 = 14255931449842774225ULL;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 3793535386U;
int zero = 0;
signed char var_12 = (signed char)-3;
signed char var_13 = (signed char)-15;
unsigned long long int var_14 = 9442345927920439112ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
