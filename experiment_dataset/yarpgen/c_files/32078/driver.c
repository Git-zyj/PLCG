#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2011670106U;
long long int var_7 = 3721194493586070693LL;
signed char var_10 = (signed char)-11;
unsigned long long int var_11 = 9157969525493127986ULL;
unsigned int var_14 = 3034163419U;
unsigned short var_15 = (unsigned short)28456;
int zero = 0;
int var_17 = -1500884923;
unsigned long long int var_18 = 3801023787728774437ULL;
unsigned short var_19 = (unsigned short)3740;
unsigned int var_20 = 3150685801U;
int var_21 = 1082283831;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
