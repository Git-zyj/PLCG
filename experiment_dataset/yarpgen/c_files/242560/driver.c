#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27909;
long long int var_13 = 6658494027505004947LL;
unsigned short var_16 = (unsigned short)21820;
int zero = 0;
unsigned short var_17 = (unsigned short)6716;
unsigned char var_18 = (unsigned char)22;
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
