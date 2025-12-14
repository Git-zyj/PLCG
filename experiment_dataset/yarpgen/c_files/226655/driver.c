#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26684;
unsigned char var_3 = (unsigned char)24;
int var_4 = 1527663876;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)43735;
unsigned long long int var_12 = 9824061933926775068ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)49534;
unsigned short var_17 = (unsigned short)18044;
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
