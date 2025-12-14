#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 626450897460243692ULL;
long long int var_4 = -683557418167649245LL;
unsigned short var_12 = (unsigned short)18667;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -5190668576290134009LL;
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
