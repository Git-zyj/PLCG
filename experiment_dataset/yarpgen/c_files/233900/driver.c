#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2215941445908177504LL;
unsigned char var_1 = (unsigned char)31;
long long int var_3 = 5081803929460236210LL;
long long int var_9 = 2815367583356718246LL;
unsigned char var_10 = (unsigned char)31;
unsigned long long int var_12 = 14691673076771849465ULL;
int zero = 0;
signed char var_15 = (signed char)96;
signed char var_16 = (signed char)11;
unsigned char var_17 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
