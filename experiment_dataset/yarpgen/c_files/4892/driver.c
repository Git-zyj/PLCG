#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-111;
unsigned int var_2 = 2190039187U;
_Bool var_6 = (_Bool)0;
signed char var_11 = (signed char)79;
int zero = 0;
unsigned char var_13 = (unsigned char)96;
long long int var_14 = -103161557100260512LL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 873596117U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
