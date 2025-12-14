#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)129;
unsigned long long int var_2 = 7314692303205303322ULL;
long long int var_6 = -4120106116192746043LL;
unsigned short var_7 = (unsigned short)43220;
unsigned int var_8 = 1373838657U;
unsigned long long int var_11 = 13618767710478749758ULL;
long long int var_17 = 3987445816961392007LL;
int zero = 0;
unsigned int var_18 = 3460149467U;
long long int var_19 = 1524896132201215679LL;
unsigned short var_20 = (unsigned short)65351;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
