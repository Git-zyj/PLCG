#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3057823552U;
unsigned int var_1 = 4197023995U;
signed char var_6 = (signed char)35;
unsigned short var_12 = (unsigned short)14548;
unsigned short var_16 = (unsigned short)49501;
unsigned int var_17 = 841512865U;
short var_18 = (short)21431;
int zero = 0;
signed char var_20 = (signed char)-37;
unsigned long long int var_21 = 17250201305141310951ULL;
signed char var_22 = (signed char)-91;
signed char var_23 = (signed char)15;
void init() {
}

void checksum() {
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
