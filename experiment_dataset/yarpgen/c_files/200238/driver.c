#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2282833934U;
long long int var_8 = -7348307200648251145LL;
signed char var_13 = (signed char)-81;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = -752576108;
long long int var_18 = 7528524363481496105LL;
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
