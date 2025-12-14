#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1414039139U;
short var_1 = (short)17808;
unsigned long long int var_3 = 12806342050148140381ULL;
unsigned int var_5 = 1678026856U;
unsigned short var_8 = (unsigned short)11647;
unsigned long long int var_10 = 18254276702259516114ULL;
unsigned short var_12 = (unsigned short)15406;
unsigned int var_15 = 1892164019U;
int zero = 0;
signed char var_17 = (signed char)100;
signed char var_18 = (signed char)-41;
unsigned long long int var_19 = 3391302605124982899ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
