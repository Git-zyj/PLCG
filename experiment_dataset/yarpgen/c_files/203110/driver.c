#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)40;
unsigned int var_4 = 3608299558U;
unsigned int var_5 = 1231503237U;
long long int var_7 = -83814114453130031LL;
signed char var_10 = (signed char)89;
unsigned long long int var_11 = 7874766428330628600ULL;
int zero = 0;
signed char var_14 = (signed char)107;
unsigned short var_15 = (unsigned short)65420;
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
