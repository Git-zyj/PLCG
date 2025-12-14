#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)3;
unsigned char var_6 = (unsigned char)55;
long long int var_10 = -4016680634589443250LL;
unsigned short var_11 = (unsigned short)61565;
int zero = 0;
long long int var_13 = -4314073019771959041LL;
signed char var_14 = (signed char)-22;
int var_15 = 539973063;
unsigned int var_16 = 232644560U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
