#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1344512302517470027LL;
signed char var_3 = (signed char)6;
unsigned long long int var_4 = 4959687282223299814ULL;
short var_6 = (short)-16629;
unsigned long long int var_8 = 3670358595488041331ULL;
signed char var_11 = (signed char)81;
short var_13 = (short)-26944;
long long int var_15 = -8031217891700716719LL;
unsigned long long int var_19 = 16438757042862528432ULL;
int zero = 0;
signed char var_20 = (signed char)126;
short var_21 = (short)3231;
long long int var_22 = 2626708845498547329LL;
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
