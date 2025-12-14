#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3373860721614553122LL;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 1537625134U;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 350467946U;
int var_13 = -1605808174;
short var_14 = (short)-18189;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
