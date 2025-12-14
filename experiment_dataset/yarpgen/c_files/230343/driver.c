#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)80;
short var_6 = (short)-15777;
long long int var_7 = -6182943089074046374LL;
unsigned int var_8 = 519554419U;
long long int var_9 = 4090908279970398783LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)41;
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
