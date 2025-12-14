#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-81;
short var_6 = (short)-2312;
unsigned int var_9 = 1552202213U;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_12 = 448030429;
short var_13 = (short)15299;
unsigned int var_14 = 2255558349U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
