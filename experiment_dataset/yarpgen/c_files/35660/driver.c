#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11282125989598560675ULL;
unsigned short var_1 = (unsigned short)15323;
int var_2 = 1928398683;
int var_3 = 1800618953;
unsigned short var_6 = (unsigned short)41093;
unsigned long long int var_7 = 439164989808621092ULL;
unsigned int var_9 = 3498675213U;
unsigned long long int var_10 = 14351241576269888726ULL;
unsigned char var_11 = (unsigned char)233;
unsigned char var_12 = (unsigned char)175;
int zero = 0;
long long int var_13 = 428040039615638924LL;
unsigned short var_14 = (unsigned short)3915;
int var_15 = 2138984939;
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
