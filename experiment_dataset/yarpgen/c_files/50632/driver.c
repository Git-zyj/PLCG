#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-4;
long long int var_10 = -2668585069345342574LL;
signed char var_12 = (signed char)-57;
int zero = 0;
unsigned char var_13 = (unsigned char)131;
unsigned short var_14 = (unsigned short)45479;
unsigned char var_15 = (unsigned char)165;
long long int var_16 = -7504449753848116326LL;
void init() {
}

void checksum() {
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
