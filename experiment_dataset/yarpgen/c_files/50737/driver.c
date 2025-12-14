#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1132097736;
unsigned long long int var_4 = 16061079902454807487ULL;
unsigned int var_8 = 3289025190U;
unsigned char var_11 = (unsigned char)109;
int var_12 = -1359264898;
int zero = 0;
long long int var_19 = 5657620538148815778LL;
unsigned short var_20 = (unsigned short)13834;
short var_21 = (short)19578;
unsigned long long int var_22 = 18256050270698979845ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
