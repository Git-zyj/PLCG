#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-82;
unsigned long long int var_4 = 2212419775815600023ULL;
unsigned char var_16 = (unsigned char)233;
unsigned char var_17 = (unsigned char)207;
int zero = 0;
unsigned int var_20 = 1515758506U;
unsigned int var_21 = 1571304721U;
long long int var_22 = 4070579047261344991LL;
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
