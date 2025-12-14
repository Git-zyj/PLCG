#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
unsigned char var_1 = (unsigned char)86;
long long int var_4 = 2204929444990250675LL;
unsigned short var_5 = (unsigned short)60995;
long long int var_6 = -1790228857995967808LL;
unsigned short var_13 = (unsigned short)15503;
int zero = 0;
unsigned short var_15 = (unsigned short)54269;
int var_16 = -676394091;
int var_17 = -1744558762;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
