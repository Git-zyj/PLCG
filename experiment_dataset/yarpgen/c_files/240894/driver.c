#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4093605938U;
unsigned int var_3 = 2542119039U;
unsigned short var_4 = (unsigned short)37637;
unsigned int var_7 = 2610157340U;
int var_10 = -1970097982;
int zero = 0;
long long int var_15 = -1390960444237117398LL;
unsigned int var_16 = 1891370647U;
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
