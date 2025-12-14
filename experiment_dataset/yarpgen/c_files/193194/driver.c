#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1484921686;
unsigned char var_3 = (unsigned char)200;
unsigned long long int var_5 = 11530506602388274352ULL;
unsigned long long int var_6 = 5018931014388358951ULL;
unsigned int var_11 = 3006255655U;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)141;
unsigned long long int var_15 = 11933033016952759835ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
