#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 4273996598U;
unsigned short var_13 = (unsigned short)58046;
long long int var_14 = 5068261904533752750LL;
int var_15 = 1659704809;
signed char var_17 = (signed char)127;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -3104398824371394237LL;
unsigned int var_20 = 338827309U;
unsigned long long int var_21 = 12640712464881804918ULL;
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
