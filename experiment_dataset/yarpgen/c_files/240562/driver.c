#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17634;
int var_3 = 900102957;
int var_5 = 1924269769;
long long int var_6 = -3961750811575343089LL;
long long int var_10 = 6144935396744772164LL;
unsigned long long int var_11 = 17472620102895920674ULL;
int zero = 0;
int var_13 = 1085961719;
unsigned char var_14 = (unsigned char)24;
unsigned char var_15 = (unsigned char)58;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
