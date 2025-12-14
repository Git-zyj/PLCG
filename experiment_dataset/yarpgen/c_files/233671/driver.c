#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)51814;
signed char var_5 = (signed char)-109;
long long int var_8 = 840203417373510408LL;
unsigned short var_9 = (unsigned short)14654;
unsigned char var_10 = (unsigned char)158;
int zero = 0;
unsigned long long int var_20 = 8985265392062460942ULL;
int var_21 = 636551324;
int var_22 = -555539512;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
