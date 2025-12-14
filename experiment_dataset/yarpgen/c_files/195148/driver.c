#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27780;
int var_4 = -1707939129;
_Bool var_6 = (_Bool)0;
int var_8 = -162604252;
unsigned int var_9 = 1231669737U;
long long int var_14 = 2231452895565340145LL;
unsigned short var_15 = (unsigned short)24501;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)26;
void init() {
}

void checksum() {
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
