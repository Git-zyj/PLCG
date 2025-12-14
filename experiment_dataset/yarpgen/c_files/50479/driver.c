#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-9;
unsigned long long int var_1 = 3255310666550295309ULL;
unsigned long long int var_3 = 2240303105145215852ULL;
short var_5 = (short)27001;
unsigned long long int var_6 = 1771791467409534779ULL;
unsigned long long int var_10 = 2239715197828972411ULL;
int zero = 0;
signed char var_13 = (signed char)89;
short var_14 = (short)27237;
unsigned char var_15 = (unsigned char)213;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
