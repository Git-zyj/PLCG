#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)30977;
int var_5 = -805206693;
unsigned short var_7 = (unsigned short)11088;
int zero = 0;
long long int var_12 = -4924895080500668701LL;
int var_13 = -1468369284;
signed char var_14 = (signed char)-126;
unsigned short var_15 = (unsigned short)3722;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
