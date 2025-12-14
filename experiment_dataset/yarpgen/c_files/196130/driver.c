#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)15;
short var_4 = (short)-24661;
signed char var_7 = (signed char)-45;
unsigned long long int var_9 = 16195877296773039214ULL;
long long int var_12 = -6733537176328246786LL;
unsigned short var_14 = (unsigned short)8903;
int zero = 0;
signed char var_16 = (signed char)98;
unsigned int var_17 = 2573797544U;
int var_18 = 825797519;
signed char var_19 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
