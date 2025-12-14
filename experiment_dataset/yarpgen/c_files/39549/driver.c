#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18224;
unsigned short var_3 = (unsigned short)13399;
unsigned long long int var_5 = 10082266229442550204ULL;
unsigned char var_7 = (unsigned char)162;
unsigned long long int var_8 = 3397867101341896758ULL;
unsigned int var_10 = 2606564526U;
int zero = 0;
unsigned int var_13 = 3262675027U;
unsigned char var_14 = (unsigned char)188;
unsigned int var_15 = 2831672042U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
