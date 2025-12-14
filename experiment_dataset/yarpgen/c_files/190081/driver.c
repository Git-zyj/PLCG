#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 11934423758887127976ULL;
int var_10 = 684272496;
unsigned int var_13 = 3048174547U;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 16483636959262435087ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)221;
unsigned int var_21 = 3150801197U;
unsigned int var_22 = 3957347671U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
