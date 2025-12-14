#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)46;
unsigned char var_2 = (unsigned char)45;
long long int var_9 = -15281630013841000LL;
int zero = 0;
short var_10 = (short)26876;
long long int var_11 = 3103419263935818442LL;
int var_12 = 1968060811;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
