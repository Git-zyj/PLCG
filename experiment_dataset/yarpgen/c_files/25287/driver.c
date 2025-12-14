#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27378;
unsigned int var_1 = 2642469096U;
unsigned long long int var_2 = 3490511934167907115ULL;
unsigned int var_4 = 1838166760U;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)247;
unsigned long long int var_9 = 4490369088723466713ULL;
int zero = 0;
int var_10 = -1042255830;
unsigned int var_11 = 1586598924U;
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
