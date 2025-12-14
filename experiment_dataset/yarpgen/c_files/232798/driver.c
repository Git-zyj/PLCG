#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52983;
short var_2 = (short)15068;
unsigned char var_5 = (unsigned char)164;
long long int var_6 = 7134257267330692008LL;
unsigned int var_14 = 3687078336U;
unsigned int var_15 = 2450789025U;
int zero = 0;
long long int var_18 = -162770718985481053LL;
unsigned short var_19 = (unsigned short)3050;
void init() {
}

void checksum() {
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
