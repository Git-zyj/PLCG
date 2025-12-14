#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -934587532;
unsigned short var_3 = (unsigned short)50291;
unsigned long long int var_11 = 16720698394338955924ULL;
int zero = 0;
signed char var_15 = (signed char)98;
long long int var_16 = -3053693217919197704LL;
unsigned char var_17 = (unsigned char)16;
unsigned char var_18 = (unsigned char)12;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
