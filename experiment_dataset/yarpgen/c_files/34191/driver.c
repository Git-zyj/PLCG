#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2158610186U;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)0;
int var_7 = 2021074550;
unsigned long long int var_9 = 14210811790083278001ULL;
int var_10 = -1031390634;
int zero = 0;
long long int var_11 = 9080906836096498138LL;
unsigned char var_12 = (unsigned char)195;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
