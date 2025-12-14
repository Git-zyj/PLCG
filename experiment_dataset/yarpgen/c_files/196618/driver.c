#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 450457021U;
long long int var_1 = 2818328425189416010LL;
long long int var_2 = -8024394747821656641LL;
short var_14 = (short)-6588;
int zero = 0;
unsigned int var_20 = 2953351898U;
unsigned short var_21 = (unsigned short)6191;
unsigned char var_22 = (unsigned char)97;
long long int var_23 = 504571405934573040LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
