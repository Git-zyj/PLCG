#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 269292393;
unsigned char var_2 = (unsigned char)77;
unsigned char var_3 = (unsigned char)205;
unsigned short var_5 = (unsigned short)25685;
unsigned short var_8 = (unsigned short)16595;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -7299208355851608509LL;
void init() {
}

void checksum() {
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
