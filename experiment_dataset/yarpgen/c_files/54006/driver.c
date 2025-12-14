#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52313;
unsigned short var_5 = (unsigned short)53632;
int var_6 = 7159378;
signed char var_9 = (signed char)97;
unsigned long long int var_13 = 15101762899984349211ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)96;
long long int var_15 = 1804937149141518517LL;
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
