#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3270792884U;
signed char var_3 = (signed char)81;
short var_4 = (short)-15766;
long long int var_5 = 4258912560742747196LL;
long long int var_8 = -6778523327114929818LL;
int var_10 = -1478421133;
int zero = 0;
short var_11 = (short)29239;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
