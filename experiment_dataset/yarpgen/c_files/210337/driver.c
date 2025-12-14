#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)195;
long long int var_9 = 812560997652210788LL;
unsigned char var_10 = (unsigned char)165;
unsigned char var_11 = (unsigned char)190;
short var_16 = (short)8368;
int zero = 0;
unsigned short var_20 = (unsigned short)27944;
int var_21 = 1263937284;
void init() {
}

void checksum() {
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
