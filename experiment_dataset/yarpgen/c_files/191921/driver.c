#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)87;
unsigned short var_6 = (unsigned short)39780;
int var_10 = -84121250;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 451932927U;
signed char var_14 = (signed char)-1;
int zero = 0;
unsigned int var_17 = 1512103377U;
unsigned long long int var_18 = 9695015763412323034ULL;
unsigned char var_19 = (unsigned char)85;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
