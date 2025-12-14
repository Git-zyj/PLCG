#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)149;
int var_9 = 711510021;
unsigned long long int var_17 = 3530679590255374483ULL;
unsigned char var_18 = (unsigned char)111;
int zero = 0;
signed char var_19 = (signed char)89;
short var_20 = (short)-16914;
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
