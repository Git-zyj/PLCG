#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1050090448U;
unsigned short var_6 = (unsigned short)5513;
unsigned short var_9 = (unsigned short)45498;
signed char var_10 = (signed char)39;
unsigned int var_13 = 2036649442U;
long long int var_14 = 7270862899705050273LL;
int zero = 0;
unsigned long long int var_19 = 9742843492371149378ULL;
unsigned long long int var_20 = 14360818767553204229ULL;
short var_21 = (short)-23564;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
