#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5696268930655801841ULL;
int var_6 = -749723067;
int var_9 = -57709149;
unsigned long long int var_10 = 12548437206309045628ULL;
unsigned int var_11 = 3649062824U;
int zero = 0;
short var_15 = (short)15978;
unsigned char var_16 = (unsigned char)139;
short var_17 = (short)6704;
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
