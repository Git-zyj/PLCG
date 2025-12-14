#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20216;
_Bool var_3 = (_Bool)1;
int var_4 = -1432291150;
unsigned int var_5 = 1061599383U;
short var_8 = (short)19869;
int var_9 = 1374335458;
int zero = 0;
unsigned int var_10 = 4013401531U;
_Bool var_11 = (_Bool)0;
long long int var_12 = 163088523495535592LL;
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
