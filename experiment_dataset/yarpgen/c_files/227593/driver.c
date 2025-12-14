#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5753365333912983603ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)52021;
unsigned long long int var_19 = 4646580789335591487ULL;
long long int var_20 = -7323355446437666474LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
