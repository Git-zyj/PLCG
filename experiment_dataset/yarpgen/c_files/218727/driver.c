#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_4 = -2660136851132090186LL;
signed char var_8 = (signed char)-30;
unsigned short var_9 = (unsigned short)24881;
int zero = 0;
long long int var_12 = -5490924342675973826LL;
signed char var_13 = (signed char)-120;
long long int var_14 = 7308161226266464624LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
