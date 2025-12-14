#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)242;
short var_6 = (short)20581;
signed char var_10 = (signed char)114;
int zero = 0;
long long int var_15 = -3071768058829552547LL;
unsigned char var_16 = (unsigned char)25;
int var_17 = 772397306;
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
