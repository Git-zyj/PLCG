#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36526;
short var_2 = (short)29019;
short var_3 = (short)-22130;
long long int var_6 = 6771336008293002823LL;
unsigned long long int var_7 = 11802566194927868460ULL;
unsigned long long int var_8 = 947121441986893936ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)204;
unsigned short var_11 = (unsigned short)25522;
unsigned int var_12 = 1600311244U;
unsigned int var_13 = 564218142U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
