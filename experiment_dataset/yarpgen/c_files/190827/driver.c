#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)2686;
long long int var_6 = 2482152805251010788LL;
signed char var_9 = (signed char)-121;
int var_12 = 2009181203;
int zero = 0;
unsigned long long int var_16 = 17186598668269343093ULL;
unsigned long long int var_17 = 14083178131744747532ULL;
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
