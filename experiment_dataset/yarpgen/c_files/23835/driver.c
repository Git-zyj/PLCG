#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 201861602379724753ULL;
unsigned long long int var_5 = 4221982998510306193ULL;
signed char var_7 = (signed char)64;
signed char var_11 = (signed char)-110;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)44545;
int var_15 = 678182608;
int zero = 0;
long long int var_17 = -6141864980607813688LL;
long long int var_18 = -7358335122892463600LL;
signed char var_19 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
