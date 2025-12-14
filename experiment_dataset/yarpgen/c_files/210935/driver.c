#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)34;
unsigned int var_3 = 1123717080U;
unsigned int var_4 = 1701128764U;
unsigned char var_9 = (unsigned char)237;
int var_10 = 1693948205;
signed char var_13 = (signed char)35;
short var_16 = (short)-28223;
short var_18 = (short)-26306;
short var_19 = (short)-18024;
int zero = 0;
int var_20 = 1843980003;
int var_21 = 1335687209;
unsigned long long int var_22 = 6962821288127466141ULL;
void init() {
}

void checksum() {
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
