#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1290641822978978006LL;
int var_3 = 1011294401;
int var_5 = 1152681796;
unsigned int var_6 = 1059257445U;
_Bool var_8 = (_Bool)0;
unsigned char var_12 = (unsigned char)141;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 923544741U;
int var_18 = -1865717809;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3070199024U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
