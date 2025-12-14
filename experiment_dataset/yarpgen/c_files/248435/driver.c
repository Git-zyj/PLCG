#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 3590773744551682800LL;
unsigned short var_8 = (unsigned short)3669;
int var_13 = -323284617;
long long int var_15 = 4412369963926301608LL;
short var_17 = (short)11039;
unsigned short var_19 = (unsigned short)43220;
int zero = 0;
unsigned char var_20 = (unsigned char)52;
unsigned short var_21 = (unsigned short)63487;
int var_22 = -1936692466;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
