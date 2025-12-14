#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)107;
unsigned short var_6 = (unsigned short)5375;
unsigned short var_7 = (unsigned short)9575;
unsigned char var_11 = (unsigned char)153;
unsigned char var_12 = (unsigned char)92;
int zero = 0;
unsigned short var_13 = (unsigned short)16180;
unsigned char var_14 = (unsigned char)126;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
