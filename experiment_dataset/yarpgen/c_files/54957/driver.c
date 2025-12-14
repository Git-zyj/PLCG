#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7618032446633913897LL;
unsigned short var_7 = (unsigned short)26853;
unsigned int var_8 = 172919113U;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-93;
long long int var_13 = 6809992757675134870LL;
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
