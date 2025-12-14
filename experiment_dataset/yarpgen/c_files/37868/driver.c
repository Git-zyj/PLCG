#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44423;
long long int var_1 = -8579240243324063190LL;
long long int var_5 = 4092414804837697249LL;
int var_7 = 449201967;
unsigned char var_9 = (unsigned char)254;
long long int var_11 = 7897531368424259492LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 152058851U;
int var_15 = 1602920243;
void init() {
}

void checksum() {
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
