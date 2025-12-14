#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-73;
long long int var_13 = -7488535872254224135LL;
unsigned long long int var_15 = 16755620283815407927ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)17864;
_Bool var_20 = (_Bool)0;
short var_21 = (short)22123;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
