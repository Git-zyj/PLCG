#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53056;
unsigned int var_2 = 3476476339U;
unsigned int var_6 = 195554021U;
int var_8 = -1688934547;
int var_10 = -933030597;
short var_14 = (short)29694;
long long int var_16 = 8040759344532603666LL;
int zero = 0;
short var_20 = (short)8218;
int var_21 = 1314562484;
void init() {
}

void checksum() {
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
