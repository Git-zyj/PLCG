#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3654737913059523164LL;
unsigned long long int var_9 = 14619759881475187474ULL;
unsigned long long int var_11 = 6263251972314627307ULL;
signed char var_12 = (signed char)45;
_Bool var_14 = (_Bool)1;
short var_15 = (short)1489;
unsigned long long int var_17 = 9855189421747242744ULL;
int zero = 0;
unsigned int var_20 = 2238985394U;
signed char var_21 = (signed char)90;
short var_22 = (short)-18212;
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
