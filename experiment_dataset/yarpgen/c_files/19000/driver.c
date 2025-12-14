#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29471;
unsigned char var_3 = (unsigned char)175;
int zero = 0;
unsigned long long int var_15 = 8608532007968359381ULL;
long long int var_16 = -7212801459002259023LL;
long long int var_17 = -5225754280093781773LL;
void init() {
}

void checksum() {
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
