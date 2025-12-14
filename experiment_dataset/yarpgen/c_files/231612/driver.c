#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2070944853U;
long long int var_4 = -1683196972092188035LL;
unsigned char var_9 = (unsigned char)87;
signed char var_10 = (signed char)-70;
int var_14 = -11194222;
signed char var_16 = (signed char)57;
int zero = 0;
long long int var_18 = 675831792625159774LL;
unsigned long long int var_19 = 15575465761917835311ULL;
int var_20 = -572497291;
unsigned int var_21 = 1385694706U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
