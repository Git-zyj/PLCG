#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4258393468963981765ULL;
unsigned char var_3 = (unsigned char)76;
signed char var_7 = (signed char)125;
int zero = 0;
int var_10 = 29483368;
short var_11 = (short)2697;
unsigned short var_12 = (unsigned short)51108;
unsigned short var_13 = (unsigned short)18500;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
