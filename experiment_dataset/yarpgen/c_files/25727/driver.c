#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1042154376630414094LL;
unsigned char var_7 = (unsigned char)198;
long long int var_12 = -1088196356585826808LL;
int zero = 0;
signed char var_16 = (signed char)90;
signed char var_17 = (signed char)-75;
unsigned char var_18 = (unsigned char)10;
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
