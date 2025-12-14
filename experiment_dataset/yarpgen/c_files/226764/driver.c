#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7278920692032832116LL;
unsigned long long int var_2 = 10740123847515630098ULL;
unsigned char var_3 = (unsigned char)254;
short var_4 = (short)-29744;
short var_7 = (short)-12451;
unsigned char var_15 = (unsigned char)35;
unsigned short var_16 = (unsigned short)30286;
int zero = 0;
int var_17 = 1328722391;
signed char var_18 = (signed char)-44;
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
