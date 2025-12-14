#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2119809098U;
short var_3 = (short)326;
unsigned int var_14 = 2430735989U;
int zero = 0;
unsigned long long int var_19 = 10493966480828607310ULL;
unsigned char var_20 = (unsigned char)36;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
