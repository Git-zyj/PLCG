#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16095870600750219498ULL;
unsigned short var_3 = (unsigned short)46242;
unsigned char var_10 = (unsigned char)57;
unsigned short var_11 = (unsigned short)12883;
int zero = 0;
unsigned long long int var_12 = 8017220740037372558ULL;
signed char var_13 = (signed char)-106;
unsigned int var_14 = 3124122087U;
void init() {
}

void checksum() {
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
