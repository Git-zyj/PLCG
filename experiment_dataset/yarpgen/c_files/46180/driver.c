#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17946265795643997078ULL;
unsigned short var_4 = (unsigned short)33279;
long long int var_6 = -7442759533438592412LL;
int zero = 0;
unsigned short var_11 = (unsigned short)9352;
unsigned int var_12 = 1365281284U;
short var_13 = (short)-3811;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
