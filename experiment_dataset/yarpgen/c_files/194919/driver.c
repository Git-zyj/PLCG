#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)52397;
long long int var_7 = -526207993961878654LL;
unsigned long long int var_8 = 14966095402780712508ULL;
long long int var_9 = 8542102418546997946LL;
int zero = 0;
unsigned short var_12 = (unsigned short)38006;
short var_13 = (short)2665;
signed char var_14 = (signed char)-87;
short var_15 = (short)-22184;
unsigned int var_16 = 3201483624U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
