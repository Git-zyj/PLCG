#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8788081131913604611ULL;
unsigned long long int var_5 = 11180261621152053343ULL;
unsigned int var_7 = 2345852403U;
unsigned short var_9 = (unsigned short)21590;
unsigned char var_14 = (unsigned char)163;
unsigned int var_15 = 3161258633U;
int var_17 = 1918608404;
int zero = 0;
signed char var_18 = (signed char)82;
unsigned char var_19 = (unsigned char)144;
short var_20 = (short)3023;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
