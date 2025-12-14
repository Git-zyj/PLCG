#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4183748791U;
int var_1 = 271526851;
signed char var_2 = (signed char)47;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 604116435U;
unsigned int var_12 = 757391523U;
long long int var_18 = 6925079102407671864LL;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = -1132683870;
long long int var_21 = -8752036970217155712LL;
void init() {
}

void checksum() {
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
