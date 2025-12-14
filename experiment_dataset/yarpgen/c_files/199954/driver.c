#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7343365807305367538LL;
signed char var_6 = (signed char)54;
unsigned int var_8 = 2284501472U;
int zero = 0;
unsigned short var_13 = (unsigned short)61983;
unsigned char var_14 = (unsigned char)132;
long long int var_15 = -1132526016506291092LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
