#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -827909129;
long long int var_5 = -3585886494516857118LL;
unsigned short var_7 = (unsigned short)43948;
unsigned short var_9 = (unsigned short)17879;
int zero = 0;
unsigned short var_13 = (unsigned short)696;
unsigned char var_14 = (unsigned char)87;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
