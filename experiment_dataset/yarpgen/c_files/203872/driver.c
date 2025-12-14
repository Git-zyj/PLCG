#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)202;
int var_7 = -1444343464;
unsigned char var_11 = (unsigned char)144;
int var_14 = -1318840946;
int zero = 0;
unsigned char var_16 = (unsigned char)241;
unsigned char var_17 = (unsigned char)80;
unsigned char var_18 = (unsigned char)249;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
