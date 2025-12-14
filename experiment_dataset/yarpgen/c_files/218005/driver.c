#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)8406;
_Bool var_9 = (_Bool)1;
unsigned short var_16 = (unsigned short)6254;
int zero = 0;
unsigned long long int var_19 = 3602702266051534786ULL;
signed char var_20 = (signed char)64;
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
