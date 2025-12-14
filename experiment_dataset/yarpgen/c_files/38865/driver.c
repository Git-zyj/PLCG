#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2446155072760940286LL;
signed char var_3 = (signed char)34;
short var_8 = (short)-7393;
signed char var_9 = (signed char)81;
unsigned char var_10 = (unsigned char)60;
signed char var_13 = (signed char)21;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 6819835093385434672ULL;
unsigned char var_17 = (unsigned char)100;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
