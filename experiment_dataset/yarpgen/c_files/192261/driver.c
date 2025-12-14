#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)13;
unsigned long long int var_7 = 8067095430965678264ULL;
unsigned long long int var_12 = 4351886155692580144ULL;
unsigned char var_13 = (unsigned char)114;
int zero = 0;
unsigned short var_15 = (unsigned short)25763;
long long int var_16 = 6311592175275720338LL;
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
