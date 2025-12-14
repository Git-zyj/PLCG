#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1537177932;
int var_5 = 1960242264;
unsigned long long int var_8 = 6418066851546310708ULL;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-5157;
int zero = 0;
int var_14 = -2107826390;
long long int var_15 = 7440625765864210196LL;
unsigned char var_16 = (unsigned char)23;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
