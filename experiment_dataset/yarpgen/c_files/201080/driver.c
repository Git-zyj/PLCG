#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1329626592316947886LL;
long long int var_8 = 8595809413301474541LL;
unsigned short var_14 = (unsigned short)24980;
unsigned char var_19 = (unsigned char)197;
int zero = 0;
unsigned short var_20 = (unsigned short)58739;
int var_21 = -212157118;
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
