#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1378607525;
unsigned char var_4 = (unsigned char)146;
unsigned short var_5 = (unsigned short)56906;
long long int var_6 = -6131715782280690865LL;
unsigned long long int var_7 = 10936972227839550658ULL;
unsigned char var_8 = (unsigned char)238;
int zero = 0;
int var_12 = -1432066659;
signed char var_13 = (signed char)110;
signed char var_14 = (signed char)0;
signed char var_15 = (signed char)98;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
