#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 48007597U;
unsigned long long int var_4 = 14659541116189738710ULL;
unsigned int var_5 = 2523128647U;
unsigned int var_6 = 1545814166U;
signed char var_9 = (signed char)-105;
unsigned long long int var_11 = 5708769643359437443ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 712460584377694064ULL;
void init() {
}

void checksum() {
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
