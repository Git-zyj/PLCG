#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 3209337944460759560LL;
long long int var_9 = 8516502601680636407LL;
unsigned char var_10 = (unsigned char)87;
short var_13 = (short)-21499;
int zero = 0;
short var_18 = (short)2169;
unsigned int var_19 = 3984680482U;
short var_20 = (short)-1649;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
