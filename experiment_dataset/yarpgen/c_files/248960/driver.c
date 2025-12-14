#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1064112165U;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 4189044284U;
int var_7 = -571745438;
unsigned int var_13 = 3380267441U;
unsigned long long int var_15 = 98143436364217326ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)64959;
unsigned char var_20 = (unsigned char)9;
void init() {
}

void checksum() {
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
