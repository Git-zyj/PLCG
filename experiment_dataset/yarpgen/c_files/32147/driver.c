#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7068261881604838956LL;
unsigned long long int var_9 = 9941368768098733700ULL;
unsigned char var_10 = (unsigned char)228;
signed char var_11 = (signed char)-81;
int zero = 0;
unsigned short var_14 = (unsigned short)26452;
unsigned long long int var_15 = 889081422706505695ULL;
unsigned short var_16 = (unsigned short)10642;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
