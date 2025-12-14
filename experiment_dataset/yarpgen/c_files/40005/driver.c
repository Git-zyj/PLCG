#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1582129990;
long long int var_3 = -7577324212128207440LL;
unsigned char var_9 = (unsigned char)149;
long long int var_11 = -2486773147210092637LL;
unsigned long long int var_12 = 16742971199924747346ULL;
long long int var_13 = -3375259529799143905LL;
signed char var_16 = (signed char)-57;
int zero = 0;
unsigned char var_20 = (unsigned char)182;
unsigned char var_21 = (unsigned char)174;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
