#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 506787583280745186LL;
int var_1 = -473981610;
long long int var_2 = -3751096367882336330LL;
unsigned char var_5 = (unsigned char)167;
unsigned int var_7 = 331451633U;
int zero = 0;
unsigned long long int var_12 = 1476704722457847267ULL;
long long int var_13 = -171311842310034849LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
