#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -265638792;
int var_4 = -1493250726;
signed char var_6 = (signed char)-49;
unsigned long long int var_8 = 11827922984730070659ULL;
_Bool var_11 = (_Bool)0;
long long int var_12 = 5613230673957656478LL;
int zero = 0;
signed char var_13 = (signed char)-31;
_Bool var_14 = (_Bool)1;
long long int var_15 = -2683066612920536641LL;
unsigned int var_16 = 3684982309U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
