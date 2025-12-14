#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)21396;
long long int var_4 = 6018280903317349777LL;
unsigned int var_5 = 965209768U;
int var_7 = -97369217;
unsigned char var_10 = (unsigned char)89;
long long int var_12 = 6382390599297623474LL;
int zero = 0;
unsigned int var_14 = 2472746452U;
unsigned long long int var_15 = 4194284247974181442ULL;
unsigned int var_16 = 596732800U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
