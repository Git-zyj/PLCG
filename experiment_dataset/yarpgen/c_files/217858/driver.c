#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2710182348U;
int var_4 = -1109760205;
long long int var_8 = 7782510438264640802LL;
unsigned short var_10 = (unsigned short)35042;
int zero = 0;
int var_11 = -1211360245;
unsigned char var_12 = (unsigned char)157;
unsigned short var_13 = (unsigned short)63977;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
