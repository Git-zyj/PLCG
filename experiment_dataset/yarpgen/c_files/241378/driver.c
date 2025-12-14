#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)15115;
unsigned short var_3 = (unsigned short)10249;
unsigned short var_7 = (unsigned short)1719;
unsigned short var_15 = (unsigned short)50729;
unsigned short var_16 = (unsigned short)45866;
int zero = 0;
unsigned short var_17 = (unsigned short)15915;
unsigned short var_18 = (unsigned short)32432;
unsigned short var_19 = (unsigned short)54134;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
