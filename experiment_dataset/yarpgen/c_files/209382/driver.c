#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1962478850;
unsigned int var_5 = 1358044318U;
signed char var_9 = (signed char)73;
signed char var_10 = (signed char)95;
long long int var_14 = 7222286213114278875LL;
int zero = 0;
unsigned long long int var_19 = 16763050014516095890ULL;
unsigned short var_20 = (unsigned short)14199;
signed char var_21 = (signed char)72;
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
