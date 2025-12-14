#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)28993;
signed char var_5 = (signed char)-31;
_Bool var_7 = (_Bool)1;
long long int var_10 = 5964562088151208826LL;
unsigned short var_11 = (unsigned short)54772;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_14 = 1949467428723066282LL;
signed char var_15 = (signed char)40;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
