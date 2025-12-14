#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_5 = (unsigned short)42572;
_Bool var_6 = (_Bool)1;
unsigned char var_15 = (unsigned char)220;
int zero = 0;
unsigned short var_16 = (unsigned short)50297;
long long int var_17 = -4461052702622268697LL;
unsigned int var_18 = 2040932935U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
