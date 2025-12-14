#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-95;
unsigned int var_3 = 1031433576U;
int var_4 = 242231386;
unsigned int var_7 = 3453252693U;
signed char var_9 = (signed char)-12;
long long int var_10 = -3903670332661086954LL;
int zero = 0;
unsigned int var_11 = 1855948943U;
long long int var_12 = 6501137954889861185LL;
long long int var_13 = 4154274693197969359LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
