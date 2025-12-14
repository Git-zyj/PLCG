#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10045705460687109120ULL;
signed char var_2 = (signed char)-96;
_Bool var_5 = (_Bool)1;
short var_7 = (short)11421;
_Bool var_9 = (_Bool)1;
long long int var_10 = -8465597428504075242LL;
unsigned short var_11 = (unsigned short)46067;
int zero = 0;
short var_12 = (short)-4353;
unsigned int var_13 = 1629165698U;
long long int var_14 = -794601854606273826LL;
short var_15 = (short)12121;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
