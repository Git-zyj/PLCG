#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2751963293U;
unsigned int var_2 = 1101128095U;
long long int var_3 = 6671308559140613632LL;
unsigned int var_5 = 1359025762U;
unsigned int var_6 = 1689800578U;
signed char var_8 = (signed char)33;
int var_11 = -1760423344;
short var_14 = (short)-1557;
int zero = 0;
unsigned int var_15 = 258027129U;
unsigned int var_16 = 2519192430U;
void init() {
}

void checksum() {
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
