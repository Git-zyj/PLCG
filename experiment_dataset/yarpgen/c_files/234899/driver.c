#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4027765508U;
_Bool var_5 = (_Bool)0;
long long int var_6 = 5613164437978047909LL;
unsigned short var_10 = (unsigned short)11024;
long long int var_11 = 9046451354679451217LL;
unsigned int var_14 = 1728488557U;
int zero = 0;
unsigned short var_15 = (unsigned short)65060;
long long int var_16 = -8559756039871435450LL;
short var_17 = (short)-29569;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
