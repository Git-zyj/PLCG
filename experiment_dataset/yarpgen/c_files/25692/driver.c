#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7190767316151901449LL;
long long int var_6 = 9141744964673847909LL;
signed char var_12 = (signed char)-28;
signed char var_13 = (signed char)77;
long long int var_14 = -271655984306135352LL;
long long int var_16 = 8235416014886211650LL;
long long int var_18 = 107638081187343736LL;
int zero = 0;
long long int var_19 = -6965983587418535021LL;
long long int var_20 = 4378668030330881231LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
