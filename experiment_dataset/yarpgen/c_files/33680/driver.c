#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -4947305074472369376LL;
unsigned char var_12 = (unsigned char)148;
unsigned short var_14 = (unsigned short)28039;
int zero = 0;
long long int var_16 = 246713887685485179LL;
long long int var_17 = -5607764848449771278LL;
void init() {
}

void checksum() {
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
