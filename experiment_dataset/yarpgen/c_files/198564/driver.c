#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51526;
long long int var_5 = -813232000415466335LL;
unsigned short var_6 = (unsigned short)41091;
unsigned char var_9 = (unsigned char)195;
unsigned int var_12 = 3002189666U;
unsigned char var_13 = (unsigned char)160;
int zero = 0;
unsigned int var_15 = 2700730205U;
unsigned long long int var_16 = 13944482415991334139ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
