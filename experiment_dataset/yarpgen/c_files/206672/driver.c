#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3539742994U;
unsigned char var_1 = (unsigned char)60;
unsigned char var_2 = (unsigned char)127;
unsigned char var_3 = (unsigned char)6;
unsigned int var_5 = 1308314345U;
long long int var_6 = -5532107987578283068LL;
unsigned short var_7 = (unsigned short)39575;
int zero = 0;
unsigned char var_10 = (unsigned char)76;
short var_11 = (short)11367;
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
