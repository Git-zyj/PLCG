#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20674;
unsigned short var_2 = (unsigned short)2455;
unsigned long long int var_7 = 3810412303375047844ULL;
unsigned char var_8 = (unsigned char)165;
unsigned int var_9 = 4061620743U;
int zero = 0;
long long int var_10 = -2230860692424891162LL;
unsigned char var_11 = (unsigned char)17;
unsigned int var_12 = 3540161757U;
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
