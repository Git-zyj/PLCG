#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7282436304764551762LL;
long long int var_6 = 3769549152038672668LL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)842;
_Bool var_9 = (_Bool)0;
long long int var_11 = -9032101284810059890LL;
unsigned int var_12 = 2587403815U;
int var_13 = 171985928;
int zero = 0;
short var_17 = (short)26778;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
