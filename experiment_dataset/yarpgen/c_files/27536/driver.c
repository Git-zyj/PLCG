#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1329230495905608583LL;
int var_5 = -221927254;
int var_7 = -30636575;
unsigned short var_8 = (unsigned short)50024;
unsigned char var_13 = (unsigned char)35;
int zero = 0;
short var_14 = (short)-11432;
unsigned char var_15 = (unsigned char)104;
int var_16 = 1239124368;
unsigned char var_17 = (unsigned char)237;
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
