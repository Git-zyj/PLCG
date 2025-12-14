#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)85;
unsigned int var_3 = 2202140246U;
int var_4 = 166149060;
long long int var_9 = 8691469567685193642LL;
long long int var_12 = 809099797519535777LL;
signed char var_17 = (signed char)-62;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2291399804U;
long long int var_21 = 4164955413970133791LL;
unsigned long long int var_22 = 10654154453388453231ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
