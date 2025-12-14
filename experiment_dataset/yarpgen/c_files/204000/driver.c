#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4489779151226457440LL;
long long int var_1 = 7374485075651754046LL;
unsigned int var_3 = 683667979U;
unsigned short var_4 = (unsigned short)45335;
unsigned char var_11 = (unsigned char)59;
int zero = 0;
signed char var_14 = (signed char)50;
unsigned long long int var_15 = 1048609257625945295ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
