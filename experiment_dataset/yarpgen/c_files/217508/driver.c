#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1850150909317375010LL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)3230;
unsigned short var_20 = (unsigned short)57727;
signed char var_21 = (signed char)-119;
signed char var_22 = (signed char)108;
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
