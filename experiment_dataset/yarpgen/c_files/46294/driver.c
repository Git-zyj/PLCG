#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50387;
unsigned long long int var_2 = 13117806655219652554ULL;
short var_13 = (short)-27425;
int zero = 0;
int var_15 = -1203291085;
unsigned short var_16 = (unsigned short)45487;
void init() {
}

void checksum() {
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
