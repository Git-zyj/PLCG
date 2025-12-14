#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23020;
unsigned short var_1 = (unsigned short)11248;
signed char var_7 = (signed char)-34;
signed char var_8 = (signed char)-45;
unsigned char var_9 = (unsigned char)169;
unsigned short var_14 = (unsigned short)29984;
int zero = 0;
long long int var_15 = 1634959262633516386LL;
unsigned char var_16 = (unsigned char)104;
unsigned char var_17 = (unsigned char)173;
unsigned short var_18 = (unsigned short)39637;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
