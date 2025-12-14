#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7534502277729793098ULL;
unsigned short var_1 = (unsigned short)13722;
long long int var_2 = -2609233059685749199LL;
unsigned short var_5 = (unsigned short)63487;
unsigned char var_6 = (unsigned char)90;
int var_8 = 1465552682;
int zero = 0;
long long int var_10 = 681690218471364597LL;
short var_11 = (short)-21834;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
