#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)95;
long long int var_5 = -2148247553858371609LL;
long long int var_6 = -1573032565321742200LL;
unsigned int var_9 = 3253483951U;
int zero = 0;
unsigned int var_11 = 539790596U;
signed char var_12 = (signed char)73;
long long int var_13 = 4332766392983290405LL;
long long int var_14 = 1141490662263082975LL;
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
