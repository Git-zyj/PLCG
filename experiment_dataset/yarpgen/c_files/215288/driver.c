#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -16590770;
unsigned char var_6 = (unsigned char)44;
unsigned short var_10 = (unsigned short)62096;
unsigned short var_11 = (unsigned short)26613;
unsigned short var_14 = (unsigned short)4309;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_16 = 172519734788932302LL;
unsigned char var_17 = (unsigned char)128;
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
