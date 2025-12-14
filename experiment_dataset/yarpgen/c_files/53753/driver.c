#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)28053;
unsigned char var_7 = (unsigned char)60;
unsigned int var_8 = 496818200U;
short var_9 = (short)24950;
unsigned int var_11 = 4112188663U;
int zero = 0;
long long int var_19 = -518218224480490750LL;
unsigned long long int var_20 = 6807316406762926672ULL;
unsigned long long int var_21 = 17066780056164851904ULL;
long long int var_22 = -1337913969609788207LL;
long long int var_23 = -843517136855100504LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
