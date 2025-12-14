#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)29437;
short var_7 = (short)-19325;
signed char var_11 = (signed char)44;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)108;
long long int var_18 = 7000811923787658401LL;
int zero = 0;
signed char var_20 = (signed char)81;
signed char var_21 = (signed char)-26;
signed char var_22 = (signed char)125;
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
