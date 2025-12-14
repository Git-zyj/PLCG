#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59573;
unsigned short var_2 = (unsigned short)32918;
short var_8 = (short)9980;
int zero = 0;
unsigned short var_14 = (unsigned short)52093;
unsigned char var_15 = (unsigned char)111;
signed char var_16 = (signed char)71;
unsigned short var_17 = (unsigned short)44341;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
