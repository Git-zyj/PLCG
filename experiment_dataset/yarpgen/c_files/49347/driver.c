#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
unsigned char var_5 = (unsigned char)27;
unsigned int var_6 = 967827764U;
unsigned char var_8 = (unsigned char)110;
short var_9 = (short)5829;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3992122311U;
short var_12 = (short)29141;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
