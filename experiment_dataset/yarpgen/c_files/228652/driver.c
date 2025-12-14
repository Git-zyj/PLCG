#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 99284968;
signed char var_2 = (signed char)13;
short var_3 = (short)-18914;
_Bool var_5 = (_Bool)1;
long long int var_6 = -8570743924113824619LL;
unsigned short var_7 = (unsigned short)55499;
short var_9 = (short)24137;
unsigned char var_10 = (unsigned char)175;
int zero = 0;
short var_12 = (short)20028;
unsigned long long int var_13 = 17678953019748339340ULL;
unsigned int var_14 = 1813089378U;
short var_15 = (short)-30054;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
