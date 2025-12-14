#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5571;
unsigned int var_2 = 1611132489U;
long long int var_3 = 2585626507122167121LL;
short var_13 = (short)28779;
int zero = 0;
unsigned long long int var_20 = 3037032864205619277ULL;
unsigned int var_21 = 4250996309U;
int var_22 = -273286809;
void init() {
}

void checksum() {
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
