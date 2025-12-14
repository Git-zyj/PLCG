#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)5030;
_Bool var_10 = (_Bool)0;
unsigned short var_14 = (unsigned short)32435;
unsigned int var_16 = 4072567290U;
int zero = 0;
unsigned char var_17 = (unsigned char)85;
unsigned short var_18 = (unsigned short)27784;
unsigned char var_19 = (unsigned char)52;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
