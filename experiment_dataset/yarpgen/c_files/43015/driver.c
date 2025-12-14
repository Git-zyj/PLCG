#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 894217099;
unsigned char var_5 = (unsigned char)23;
unsigned short var_7 = (unsigned short)40140;
int zero = 0;
long long int var_10 = 4516031521649470071LL;
unsigned char var_11 = (unsigned char)21;
signed char var_12 = (signed char)-108;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
