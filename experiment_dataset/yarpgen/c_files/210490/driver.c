#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)42330;
_Bool var_5 = (_Bool)1;
long long int var_10 = -400846634099133837LL;
int zero = 0;
signed char var_20 = (signed char)-70;
unsigned short var_21 = (unsigned short)31934;
int var_22 = 1564359056;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
