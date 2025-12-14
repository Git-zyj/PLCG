#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5531337787322700482LL;
unsigned char var_1 = (unsigned char)169;
int var_3 = 1829272468;
unsigned char var_4 = (unsigned char)96;
unsigned short var_6 = (unsigned short)22959;
long long int var_11 = -5626889797915055255LL;
int zero = 0;
unsigned char var_15 = (unsigned char)37;
unsigned char var_16 = (unsigned char)206;
unsigned int var_17 = 2451015117U;
signed char var_18 = (signed char)46;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
