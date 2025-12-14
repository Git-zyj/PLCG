#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3814248630459116415LL;
short var_1 = (short)20042;
unsigned short var_2 = (unsigned short)11608;
short var_5 = (short)15053;
int zero = 0;
signed char var_12 = (signed char)106;
unsigned long long int var_13 = 6834995009665614757ULL;
_Bool var_14 = (_Bool)0;
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
