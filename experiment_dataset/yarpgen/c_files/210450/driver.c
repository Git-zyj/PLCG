#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39454;
signed char var_1 = (signed char)3;
unsigned int var_4 = 281512196U;
unsigned short var_5 = (unsigned short)46635;
unsigned int var_9 = 3192140949U;
unsigned long long int var_10 = 6474027275188289616ULL;
unsigned short var_11 = (unsigned short)39201;
int zero = 0;
signed char var_13 = (signed char)-11;
unsigned int var_14 = 372500030U;
unsigned short var_15 = (unsigned short)5680;
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
