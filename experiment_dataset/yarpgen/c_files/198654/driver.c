#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1578;
short var_2 = (short)14466;
long long int var_5 = -6719037380703567460LL;
unsigned int var_10 = 56030278U;
int zero = 0;
int var_19 = 15269482;
unsigned char var_20 = (unsigned char)227;
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
