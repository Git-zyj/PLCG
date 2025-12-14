#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6760457669057154737LL;
unsigned short var_6 = (unsigned short)40515;
unsigned short var_7 = (unsigned short)51114;
long long int var_8 = -2326192826861594222LL;
unsigned short var_9 = (unsigned short)33472;
signed char var_11 = (signed char)10;
int zero = 0;
signed char var_12 = (signed char)20;
unsigned char var_13 = (unsigned char)67;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
