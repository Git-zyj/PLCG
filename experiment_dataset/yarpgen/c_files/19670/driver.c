#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)249;
unsigned long long int var_5 = 14414920006064006546ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)56758;
unsigned long long int var_18 = 4279774514461971191ULL;
short var_19 = (short)32301;
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
