#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15513;
unsigned int var_2 = 2343414988U;
unsigned int var_3 = 3381397064U;
short var_4 = (short)-13817;
long long int var_6 = -6019792308892615594LL;
unsigned char var_7 = (unsigned char)110;
int zero = 0;
long long int var_10 = 350057017376179514LL;
unsigned int var_11 = 2886296337U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
