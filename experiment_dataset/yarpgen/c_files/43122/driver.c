#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)17;
unsigned char var_1 = (unsigned char)226;
unsigned char var_4 = (unsigned char)234;
unsigned char var_5 = (unsigned char)90;
signed char var_9 = (signed char)120;
long long int var_11 = 2709533106699383284LL;
unsigned char var_12 = (unsigned char)75;
int zero = 0;
unsigned short var_17 = (unsigned short)57940;
unsigned short var_18 = (unsigned short)63106;
void init() {
}

void checksum() {
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
