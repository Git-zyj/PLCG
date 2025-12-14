#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-15;
unsigned char var_2 = (unsigned char)151;
signed char var_4 = (signed char)95;
short var_12 = (short)-12383;
long long int var_13 = -3652598538276805171LL;
long long int var_14 = -2847203835606427514LL;
short var_15 = (short)-28382;
int var_16 = 1161100580;
int var_17 = -1820901007;
signed char var_18 = (signed char)41;
int zero = 0;
signed char var_20 = (signed char)-120;
short var_21 = (short)-22919;
long long int var_22 = 1549011792049799951LL;
short var_23 = (short)3881;
unsigned long long int var_24 = 12702693488345438835ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
