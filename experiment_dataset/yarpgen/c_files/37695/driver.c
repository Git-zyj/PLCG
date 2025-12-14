#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)231;
signed char var_8 = (signed char)-34;
unsigned long long int var_11 = 11517640258532259197ULL;
unsigned int var_12 = 911096561U;
int zero = 0;
int var_13 = -725973688;
int var_14 = -658274754;
unsigned short var_15 = (unsigned short)51641;
void init() {
}

void checksum() {
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
