#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1732313630;
unsigned char var_7 = (unsigned char)50;
signed char var_10 = (signed char)-9;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 461875611U;
long long int var_15 = -6867140761811944770LL;
int zero = 0;
long long int var_17 = -1675216597872240640LL;
long long int var_18 = 2547523254176752472LL;
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
