#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6044638870943535120LL;
short var_1 = (short)17081;
unsigned short var_3 = (unsigned short)50760;
unsigned int var_5 = 1220764478U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)58260;
int var_13 = -1478945582;
unsigned char var_14 = (unsigned char)181;
long long int var_15 = 3236991611741073064LL;
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
