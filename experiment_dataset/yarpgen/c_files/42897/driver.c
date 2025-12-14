#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)242;
long long int var_3 = 305441161977423057LL;
int var_4 = 2006916741;
unsigned long long int var_7 = 6368394653518722305ULL;
int var_11 = 1589052947;
int zero = 0;
unsigned short var_12 = (unsigned short)5167;
signed char var_13 = (signed char)70;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
