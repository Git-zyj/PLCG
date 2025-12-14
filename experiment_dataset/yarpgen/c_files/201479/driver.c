#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 375759488;
short var_6 = (short)-5938;
long long int var_9 = 4399149447090121730LL;
unsigned char var_11 = (unsigned char)106;
signed char var_12 = (signed char)-64;
int var_14 = 557393738;
unsigned short var_15 = (unsigned short)51533;
int zero = 0;
signed char var_16 = (signed char)43;
short var_17 = (short)4817;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
