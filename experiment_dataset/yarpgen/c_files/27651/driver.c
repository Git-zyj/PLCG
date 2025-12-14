#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15935;
unsigned int var_3 = 3851243305U;
unsigned long long int var_8 = 4484117837404073274ULL;
unsigned int var_12 = 3294595442U;
signed char var_15 = (signed char)-33;
int zero = 0;
unsigned char var_18 = (unsigned char)63;
long long int var_19 = 5484053846161879156LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
