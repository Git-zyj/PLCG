#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1666978U;
long long int var_4 = 8006216641448440478LL;
int var_6 = -259641047;
unsigned int var_7 = 1342009343U;
long long int var_8 = -3871572190470215546LL;
short var_10 = (short)15162;
unsigned int var_12 = 237706587U;
int var_13 = -723071577;
int zero = 0;
int var_15 = -967895129;
signed char var_16 = (signed char)52;
short var_17 = (short)7676;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
