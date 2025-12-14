#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
int var_1 = 1849788056;
short var_5 = (short)11300;
signed char var_11 = (signed char)-26;
int var_12 = -433804337;
int var_16 = 1674082438;
int var_18 = 1981688517;
int zero = 0;
unsigned char var_19 = (unsigned char)23;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)24;
signed char var_22 = (signed char)13;
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
