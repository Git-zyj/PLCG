#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 631537394U;
long long int var_2 = -1724092858586649085LL;
signed char var_4 = (signed char)10;
short var_5 = (short)-4001;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)37;
int zero = 0;
unsigned char var_12 = (unsigned char)49;
_Bool var_13 = (_Bool)1;
long long int var_14 = 3837574983536779425LL;
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
