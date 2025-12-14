#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -546936819;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 831873743U;
long long int var_9 = -6981342645653899033LL;
unsigned char var_17 = (unsigned char)43;
signed char var_18 = (signed char)62;
int zero = 0;
unsigned int var_20 = 3917609091U;
_Bool var_21 = (_Bool)0;
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
