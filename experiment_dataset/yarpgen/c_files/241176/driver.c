#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)45930;
unsigned long long int var_10 = 1753159657979199411ULL;
int var_11 = 212505246;
int zero = 0;
long long int var_15 = -3044862401497825431LL;
unsigned char var_16 = (unsigned char)155;
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
