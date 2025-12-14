#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42765;
unsigned long long int var_2 = 15850938258226578878ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)33322;
long long int var_19 = 2158336966864995710LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
