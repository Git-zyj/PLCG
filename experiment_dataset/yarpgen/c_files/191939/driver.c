#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)57867;
unsigned short var_6 = (unsigned short)58029;
long long int var_9 = -186729801998999066LL;
unsigned int var_12 = 1158940662U;
signed char var_13 = (signed char)-11;
int zero = 0;
unsigned int var_16 = 1054702805U;
unsigned short var_17 = (unsigned short)47736;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
