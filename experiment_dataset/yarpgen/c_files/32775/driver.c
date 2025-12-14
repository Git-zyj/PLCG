#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30833;
long long int var_2 = -3180047579280349337LL;
unsigned long long int var_3 = 9831767709903571995ULL;
unsigned long long int var_6 = 195048824167866015ULL;
unsigned long long int var_8 = 16459457156639690049ULL;
long long int var_10 = 2937188932703793627LL;
int zero = 0;
unsigned long long int var_11 = 11569969784332486788ULL;
short var_12 = (short)32691;
signed char var_13 = (signed char)56;
long long int var_14 = 8477397753428932334LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
