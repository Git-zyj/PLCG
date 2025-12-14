#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -9565079;
short var_2 = (short)26169;
unsigned long long int var_7 = 9651407322550054848ULL;
short var_8 = (short)-19548;
unsigned short var_13 = (unsigned short)40234;
int zero = 0;
unsigned short var_16 = (unsigned short)15508;
unsigned long long int var_17 = 15922877546465504185ULL;
short var_18 = (short)-15760;
unsigned short var_19 = (unsigned short)57666;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
