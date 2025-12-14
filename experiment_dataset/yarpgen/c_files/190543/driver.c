#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int var_10 = -210274035;
signed char var_11 = (signed char)109;
long long int var_15 = -402241248344980618LL;
int zero = 0;
signed char var_19 = (signed char)98;
unsigned char var_20 = (unsigned char)95;
void init() {
}

void checksum() {
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
