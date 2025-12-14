#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)31617;
long long int var_9 = -1899250490427745982LL;
unsigned char var_10 = (unsigned char)203;
unsigned short var_13 = (unsigned short)6502;
unsigned int var_14 = 2529281889U;
signed char var_15 = (signed char)14;
int zero = 0;
unsigned short var_18 = (unsigned short)27374;
unsigned short var_19 = (unsigned short)49737;
signed char var_20 = (signed char)30;
unsigned char var_21 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
