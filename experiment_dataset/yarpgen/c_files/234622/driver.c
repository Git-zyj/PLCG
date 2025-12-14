#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16089559498154495454ULL;
unsigned char var_4 = (unsigned char)189;
unsigned short var_5 = (unsigned short)41718;
unsigned long long int var_7 = 5510559211533026724ULL;
unsigned long long int var_9 = 5235885879976348250ULL;
int zero = 0;
long long int var_13 = 8034611477450703820LL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
